#include <stdio.h>
#include <stdlib.h>

#define char_bytes 1
#define int_bytes 2
#define float_bytes 4
#define double_bytes 8

int main()
{
/*10. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
      declara��o, x esteja armazenado no endere�o de mem�ria 4092 (ou seja, o endere�o de x[0]).
      Suponha tamb�m que na m�quina seja usada uma vari�vel do tipo char ocupa 1 byte, do tipo int
      ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais ser�o os
      valores de x+1, x+2 e x+3 se:

     x for declarado como char?

     x for declarado como int?

     x for declarado como float?

     x for declarado como double?

    R:

    x for declarado como char?
    x+1 = 4093
    x+2 = 4094
    x+3 = 4095

    x for declarado como int?
    x+1 = 4094
    x+2 = 4096
    x+3 = 4098

    x for declarado como float?
    x+1 = 4096
    x+2 = 4100
    x+3 = 4104

    x for declarado como double?
    x+1 = 4100
    x+2 = 4108
    x+3 = 4116

  11. Implemente um programa de computador para testar estas suposi��es e compare as respostas
      oferecidas pelo programa com as respostas que voc� idealizou.

*/

    int i,x;

    printf("Se x for declarado como char: \n");
    for(i=1;i<4;i++){
        x=4092;
        printf("x+%d = %d\n", i, x+(i*char_bytes));
    }

    printf("\n");

    printf("Se x for declarado como int: \n");
    for(i=1;i<4;i++){
        x=4092;
        printf("x+%d = %d\n", i, x+(i*int_bytes));
    }

    printf("\n");

    printf("Se x for declarado como float: \n");
    for(i=1;i<4;i++){
        x=4092;
        printf("x+%d = %d\n", i, x+(i*float_bytes));
    }

    printf("\n");

    printf("Se x for declarado como double: \n");
    for(i=1;i<4;i++){
        x=4092;
        printf("x+%d = %d\n", i, x+(i*double_bytes));
    }

    return 0;
}
