#include <stdio.h>
#include <stdlib.h>

int comparador(int *v1, int *v2) {
    return(*v1 - *v2);
}

int main()
{
    /*
    16. Utilize a ideia do ponteiro para função pela função qsort() para
        implementar sua própria função de ordenação. Para isso, sua função
        deverá receber, entre outros argumentos, um ponteiro para a função
        de comparação.
    */
    int comparador(int *, int *);

    int i;
    int (*pf)();
    int n[] = {320, 10, 80, 40, 160 , 20, 5};
    pf = comparador;

    printf("Antes: \n");
    for(i = 0; i < 7; i++){
        printf("%d ", n[i]);
    }
    printf("\n\n");

    qsort(n, 7, sizeof(int), *pf);

    printf("Depois: \n");
    for(i = 0; i < 7; i++){
        printf("%d ", n[i]);
    }
    printf("\n");

    return 0;
}
