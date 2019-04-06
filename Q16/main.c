#include <stdio.h>
#include <stdlib.h>

/*
16. Utilize a ideia do ponteiro para fun��o pela fun��o qsort() para
    implementar sua pr�pria fun��o de ordena��o. Para isso, sua fun��o
    dever� receber, entre outros argumentos, um ponteiro para a fun��o
    de compara��o.
*/

float comparador (float *v1, float *v2){
  return (*v1 - *v2);
}

int main(){

  int n, i, j;
  float t;

  printf("Diga o numero de componentes do vetor: ");
  scanf("%d",&n);
  printf("\n");

/* Vetor v e aloca��o da sua mem�ria. */

  float *v;
  v=(float*) malloc(n*sizeof(float));

  printf("Insira os elementos: \n");
  printf("\n");
  for(i=0; i<n; i++){
    printf("Elemento %d: ", i);
    scanf("%f", &v[i]);
    printf("\n");
  }

  printf("Antes: \n");
  for(i=0; i<n; i++){
    printf("%f ", v[i]);
  }
  printf("\n\n");

  /* Fun��o de ordena��o do vetor, usando a fun��o de compara��o usual do qsort. */

  for (i=0; i<(n-1); i++){
    for (j=(i+1); j<n; j++){
      if(comparador(&v[i],&v[j])>0){
        t = v[i];
        v[i] = v[j];
        v[j] = t;
      }
    }
  }

  printf("Depois: \n");
  for(i=0; i<n; i++){
    printf("%f ", v[i]);
  }
  printf("\n\n");

return 0;
}
