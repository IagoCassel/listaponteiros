#include <stdio.h>
#include <stdlib.h>

int main()
{
/*8. Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas?
     Justifique.

     p = mat + 1;
     p = mat++;
     p = ++mat;
     x = (*mat)++;

    R:

    "p = mat + 1;" dá o endereço de "um pulo de um int" a partir de "&mat[0]". Logo: &mat[1].

    "p = mat++;" não é válida, por mat não ser um ponteiro.

    "p = ++mat;" o operador "++" antes da variável "mat" não faz sentido.

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
