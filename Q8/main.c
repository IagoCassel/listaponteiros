#include <stdio.h>
#include <stdlib.h>

int main()
{
/*8. Considerando a declara��o int mat[4], *p, x;, quais das seguintes express�es s�o v�lidas?
     Justifique.

     p = mat + 1;
     p = mat++;
     p = ++mat;
     x = (*mat)++;

    R:

    "p = mat + 1;" d� o endere�o de "um pulo de um int" a partir de "&mat[0]". Logo: &mat[1].

    "p = mat++;" n�o � v�lida, por mat n�o ser um ponteiro.

    "p = ++mat;" o operador "++" antes da vari�vel "mat" n�o faz sentido.

    "x = (*mat)++;" retorna o valor de "mat[0]".

*/

    int mat[4]={1,2,3,4};
    int *p, x;

    printf("%x\n",mat + 1);
    /* printf("%x\n",mat++); */
    /* printf("%x\n",++mat); */
    printf("%d\n",(*mat)++);

    return 0;
}
