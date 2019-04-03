/* Q14 Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente.
Utilize alocação dinâmica de memória para realizar a tarefa.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Digite o numero de valores...\n");
    scanf("%d",&n);
    //Alocando dinamicamnte e realizando a leitura dos dados.
    float *x, maior, aux;
    x=(float*) malloc(n*sizeof(float*));
    for (i = 0; i < n; i++){
		printf("Digite o valor na posicao %d: ", i+1);
		scanf("%f", &x[i]);
	}
	printf("ARRAY NAO ORDENADO \n");
	for (i = 0; i < n; i++){
		printf(" %f ", x[i]);
	}
	//Utilizando o algoritmo de INSERTION SORT para ordenar o array.
	printf("\nARRAY ORDENADO POR INSERTION SORT \n");
	for (i = 1; i < n; i++){
		for (j = i; j > 0; j--){
		if (x[j]<x[j-1]){
			maior = x[j];
			x[j] = x[j-1];
			x[j-1] = maior;
		}
	}
}
for (i = 0; i < n; i++){
		printf(" %f ", x[i]);
	}
	free(x);
    return 0;
}
