/*Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores
(os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo, se o primeiro vetor contiver os
elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores
resultantes iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o
número de elementos presentes em cada vetor. */
#include <stdio.h>
#include <stdlib.h>
void soma (int x[], int y[], int z[], int n){
    int i;
    for (i = 0; i<n; i++){
    z[i] = (x[i] + y[i]);
}
    for (i = 0; i<n; i++){
        printf("\nArray soma : Elemento %d :", i+1);
        printf("%d", z[i]);
    }

}
int main()
{
    int n, i;
    printf("Digite o numero de elementos dos arrays: ");
    scanf("%d", &n);
    int x[n], y[n], z[n];
    for (i = 0; i<n; i++){
        printf("Array 1 : Digite o elemento %d ", i+1);
        scanf("%d", &x[i]);
        printf("Array 2 : Digite o elemento %d ", i+1);
        scanf("%d", &y[i]);
    }
    soma(x,y,z,n);

    return 0;
}
