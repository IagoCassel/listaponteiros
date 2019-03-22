#include <stdio.h>
#include <stdlib.h>

int main()
{
/*1. Qual a utilidade do aprendizado do uso de ponteiro para aplicações em engenharia?

  R: Ponteiros possibilitam uma melhor e mais eficiante manipulação de dados, além de
     garantirem uma vasta liberdade na solução de problemas da engenharia. Ao tratar
     de problemas que exijam uma utilizaçãode memória mais eficiente, ponteiros são
     praticamente indispensaveis.
*/

/*2. Seja o seguinte trecho de programa:

  int i=3,j=5;
  int *p, *q;
  p = &i;
  q = &j;

  Determine o valor das seguintes expressões:

  p == &i;
  *p - *q;
  **&p;
  3 - *p/(*q) + 7;

  R:

  "p == &i" é uma operação de comparação. Caso a comparação seja verdade, ela retorna 1,
  o contrário retorna 0. Como o ponteiro "p" guarda o endereço de "i", então a comparação
  é verdadeira. Logo, irá retornar 1.

  "*p - *q" significa: O valor dentro do endereço guardado por "p", menos o valor dentro
  do endereço guardado por "q". "p" guarda o endereço de "i", que vale 3. "q" guarda o
    endereço de "j", que vale 5. Logo: "*p - *q" é igual a (3-5), que é igual a -2.

  "**&p" pode ser traduzido como: O valor dentro do endereço(O valor dentro do endereço(
  Endereço do ponteiro "p")). Como "O valor dentro do endereço(Endereço do ponteiro "p"))" é
  igual a "ponteiro p", a tradução fica: O valor dentro do endereço(Ponteiro "p"). Como o
  Ponteiro "p" guarda o endereço de "i", a tradução final fica: O valor dentro do endereço(
  Endereço de i), que é igual a o "Valor de i". Desse modo, o retorno é "i", que é 3.

  3 - *p/(*q) + 7;

*/

int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

printf("%d\n", p == &i);
printf("%d\n", *p - *q);
printf("%d\n", **&p);
printf("%d\n", 3 - *p/(*q) + 7);

return 0;
}
