#include <stdio.h>
#include <stdlib.h>

int main()
{
/*3. Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

  int i=5, *p;
  p = &i;
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

  R:

  "p" retorna o endereço de "i", que deveria retornar 4094.

  "*p+2" retorna o valor dentro do endereço de "i" mais 2. Logo: (5 + 2), que é igual a 7.

  "**&p" é igual a "*p", porque "*&p" é igual a p. Como "*p" é o valor dentro do endereço
  guardado por "p", que é igual a "&i", o termo retorna o valor de "i". Logo: retorna 5.

  "3**p" é lido como "3*(*p)". O fato de "*p" retornar 5, faz com que o retorno geral seja
  3*5, que é igual a 15.

  "**&p+4", pela resposta do terceiro item, é igual a 5 + 4. Oque retorna 9.

*/

  int i=5, *p;
  p = &i;
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

  return 0;
}
