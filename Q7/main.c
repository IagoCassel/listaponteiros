#include <stdio.h>
#include <stdlib.h>

int main()
{
/*7. Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor
     do terceiro elemento do vetor?

     *(pulo + 2);
     *(pulo + 4);
     pulo + 4;
     pulo + 2;

    R:

    "*(pulo + 2);" é a única expressão que retorna o valor do terceiro componente do verto "pulo".

*/
    int pulo[5]={1,2,3,4,5};

    printf("%d\n",*(pulo + 2));
    printf("%d\n",*(pulo + 4));
    printf("%d\n",pulo + 4);
    printf("%d\n",pulo + 2);

    return 0;
}
