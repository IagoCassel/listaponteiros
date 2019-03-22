#include <stdio.h>
#include <stdlib.h>

int main()
{
/*4. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões
     de atribuição são ilegais?

    p = i;
    q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    R:

    "p = i;" é compilável, mas teoricamente ilegal. O ponteiro "p" deveria receber o o endereço
    de "i", não o valor dele.

    "i = (*&)j;" é ilegal. O uso dos parêntese está denotando uma expressão dentro do mesmo.
    Entretanto, "*&" não é uma expressão e só tem valor lógico quando atrelado diretamente a
    uma variável.

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
