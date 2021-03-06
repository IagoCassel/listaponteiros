#include <stdio.h>
#include <stdlib.h>

int main()
{
/*4. Se i e j s�o vari�veis inteiras e p e q ponteiros para int, quais das seguintes express�es
     de atribui��o s�o ilegais?

    p = i;
    q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    R:

    "p = i;" � compil�vel, mas teoricamente ilegal. O ponteiro "p" deveria receber o o endere�o
    de "i", n�o o valor dele.

    "i = (*&)j;" � ilegal. O uso dos par�ntese est� denotando uma express�o dentro do mesmo.
    Entretanto, "*&" n�o � uma express�o e s� tem valor l�gico quando atrelado diretamente a
    uma vari�vel.

    "q = *p;" apresenta o mesmo caso que "p = i;".

*/

int i, j;
int *p, *q;

i = 3;
j = 5;

/* p = i; */

q = &j;
printf("%x\n", q);

p = &*&i;
printf("%x\n", p);

/* i = (*&)j; */

i = *&j;
printf("%d\n", i);

i = *&*&j;
printf("%d\n", i);

/* q = *p; */

i = (*p)++ + *q;
printf("%d\n", i);

return 0;
}
