#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comp(float *v1, float *v2)
{
    return (*(int*)v1 - *(int*)v2);
}
void insertion_sort(float *x, int n)
{
    int i, j;
    float maior;
    for (i = 1; i < n; i++)
    {
        for (j = i; j > 0; j--)
        {
            if (x[j]<x[j-1])
            {
                maior = x[j];
                x[j] = x[j-1];
                x[j-1] = maior;
            }
        }
    }
    printf("\n ARRAY ORDENADO POR INSERTION SORT\n");
    for (i = 0; i < n; i++)
    {
        printf(" %f \n", x[i]);
    }
}

void q_sort(float *x, int n)
{
    int i;
    qsort(x, n, sizeof(float), comp);
    printf("\n ARRAY ORDENADO POR QSORT\n");
    for (i = 0; i < n; i++)
    {
        printf(" %f \n", x[i]);
    }
}
void ord_comp(float *x, int n)
{
    int i,j;
    float t;
    for (i=0; i<(n-1); i++)
    {
        for (j=(i+1); j<n; j++)
        {
            if(comp(&x[i],&x[j])>0)
            {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    printf("\n ARRAY ORDENADO COM FUNCAO DE COMPARACAO\n");
    for (i = 0; i < n; i++)
    {
        printf(" %f \n", x[i]);
    }
}
int main()
{
    clock_t tempo[2];
    int n, i, j;
    printf("Digite o numero de valores...\n");
    scanf("%d",&n);
    float *x;
    x=(float*) malloc(n*sizeof(float*));
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor na posicao %d: ", i+1);
        scanf("%f", &x[i]);
    }
    printf("ARRAY NAO ORDENADO\n");
    for (i = 0; i < n; i++)
    {
        printf(" %f \n", x[i]);
    }
    tempo[0] = clock();
    insertion_sort(x, n);
    tempo[1] = clock();
    double Tempo = (tempo[1] - tempo[0]) *1000.0/ (double) CLOCKS_PER_SEC;
    printf("\nTempo gasto: %g ms. \n", Tempo);
    tempo[0] = clock();
    q_sort(x, n);
    tempo[1] = clock();
    Tempo = (tempo[1] - tempo[0])*1000.0/ (double) CLOCKS_PER_SEC;
    printf("\nTempo gasto: %g ms. \n", Tempo);
    tempo[0] = clock();
    ord_comp(x, n);
    tempo[1] = clock();
    Tempo = (tempo[1] - tempo[0])*1000.0/ (double) CLOCKS_PER_SEC;
    printf("\nTempo gasto: %g ms. \n", Tempo);
    free(x);
    return 0;
}

