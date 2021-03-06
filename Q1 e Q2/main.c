#include <stdio.h>
#include <stdlib.h>

int main()
{
/*1. Qual a utilidade do aprendizado do uso de ponteiro para aplica��es em engenharia?

  R: Ponteiros possibilitam uma melhor e mais eficiante manipula��o de dados, al�m de
     garantirem uma vasta liberdade na solu��o de problemas da engenharia. Ao tratar
     de problemas que exijam uma utiliza��ode mem�ria mais eficiente, ponteiros s�o
     praticamente indispensaveis.
*/

/*2. Seja o seguinte trecho de programa:

  int i=3,j=5;
  int *p, *q;
  p = &i;
  q = &j;

  Determine o valor das seguintes express�es:

  p == &i;
  *p - *q;
  **&p;
  3 - *p/(*q) + 7;

  R:

  "p == &i" � uma opera��o de compara��o. Caso a compara��o seja verdade, ela retorna 1,
  o contr�rio retorna 0. Como o ponteiro "p" guarda o endere�o de "i", ent�o a compara��o
  � verdadeira. Logo, ir� retornar 1.

  "*p - *q" significa: O valor dentro do endere�o guardado por "p", menos o valor dentro
  do endere�o guardado por "q". "p" guarda o endere�o de "i", que vale 3. "q" guarda o
    endere�o de "j", que vale 5. Logo: "*p - *q" � igual a (3-5), que � igual a -2.

  "**&p" pode ser traduzido como: O valor dentro do endere�o(O valor dentro do endere�o(
  Endere�o do ponteiro "p")). Como "O valor dentro do endere�o(Endere�o do ponteiro "p"))" �
  igual a "ponteiro p", a tradu��o fica: O valor dentro do endere�o(Ponteiro "p"). Como o
  Ponteiro "p" guarda o endere�o de "i", a tradu��o final fica: O valor dentro do endere�o(
  Endere�o de i), que � igual a o "Valor de i". Desse modo, o retorno � "i", que � 3.

  "3 - *p/(*q) + 7" ser� igual a 10, porque ele realizar� a opera��o 3 - 0 + 7. Isso se deve 
  ao fato que foi realizada uma divis�o resultante menor que 1, fazendo com que o compilador
  d� o cast do valor em inteiro. Isso faz com que 3/5 resulte em 0 e a opera��o seja "3 - 0 + 7".

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
