#include <stdio.h>
#include <stdlib.h>

int subitrador(int *v1, int *v2){
    return(*v1 - *v2);
}

int main()
{
    /*
    13. O que � um ponteiro para uma fun��o? Pesquise na Internet refer�ncias
        sobre o assunto e escreva um pequeno programa exemplificando o uso
        deste recurso.

        R:

        1- Ponteiros passados como par�metros de uma fun��o. N�o alocam mem�ria
           como vari�veis "n�o-ponteiradas".

        2- Ponteiro que aponta para uma fun��o e chama ela.
    */
    int subitrador(int *, int *);
    int v1, v2, r;
    int (*p)();

    v1=2;
    v2=3;

    p = subitrador;

    r=(*p)(&v1,&v2);

    printf("%d",r);

    return 0;
}
