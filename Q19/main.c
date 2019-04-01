#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
      19. Crie uma função capaz de realizar multiplicação matricial da forma C = AB.
          A função deve receber 6 argumentos: os ponteiros para as matrizes A, B e
          C, o número de linhas e colunas de A e o número de colunas de B (assuma que
          o número de coluna de A é igual ao número de linhas de B). O resultado da
          multiplicação deve ficar armazenado em C. Crie um programa para testar sua
          implementação, capaz de utilizar a função de multiplicação e imprimir as três
          matrizes. A função criada para multiplicação não deve realizar nenhum tipo de
          saída de dados no terminal.
    */
    srand(time(NULL));
    int ** a, ** b, ** c;
    int i, j, k, nl = 3, nc = 3, nz=3;

    /* Aloca memórica para as matrizes A e B */
    a = (int **)malloc(nl*sizeof(int *));
    a[0] = (int *)malloc(nl*nc*sizeof(int));
    for(i=1;i<nl;i++){
      a[i] = a[i-1]+nc;
    }

    b = (int **)malloc(nc*sizeof(int *));
    b[0] = (int *)malloc(nl*nc*sizeof(int));
    for(i=1;i<nc;i++){
      b[i] = b[i-1]+nl;
    }

    /* Aleatoriza e mostra as matrizes */
    for(i=0;i<nl;i++){
      for(j=0;j<nc;j++){
        a[i][j] = rand()%10;
        printf("%d ", a[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    for(i=0;i<nl;i++){
      for(j=0;j<nz;j++){
        b[i][j] = rand()%10;
        printf("%d ", b[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    /* Multiplica as matrizes */
    c = (int **)malloc(nl*sizeof(int *));
    c[0] = (int *)malloc(nl*nz*sizeof(int));

     for(i=1;i<nl;i++){
       c[i] = c[i-1]+nz;
     }

     for(i=0;i<nl;i++){
       for(j=0;j<nz;j++){
         int v = 0;
         for(k=0;k<nc;k++){
	   v = v + a[i][k]*b[k][j];
	 }
	 c[i][j] = v;
        }
      }

    /* Printa C */
    for(i=0;i<nl;i++){
      for(j=0;j<nz;j++){
        printf("%d ", c[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    return 0;
}
