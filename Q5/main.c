#include <stdio.h>
#include <stdlib.h>

int main()
{
/*5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
     foram obtidas as respostas esperadas).

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

     (a)
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

     (b)
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

     (c)
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

     (d)
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

     (e)
  p3 = nome;
  printf("%c \n", *p3);

     (f)
  p3 = p3 + 4;
  printf("%c \n", *p3);

     (g)
  p3--;
  printf("%c \n", *p3);

     (h)
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

     (i)
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

     (j)
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

     (l)
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

     (m)
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

     (n)
  p5++;
  printf("%d \n", *p5);
  return(0);
}

    R:

    (a) Valor inteiro passado pelo ponteiro "p1" para "valor", 20.

    (b) Valor flutuante passado pelo ponteiro "p2" para "temp", 29.0.

    (c) Valor char recebido pelo "aux", por um ponteiro "p3". "p3" recebeu o endereço do primeiro
    elemento do string "Ponteiros". Logo: "P".

    (d) Valor char recebido pelo "aux", por um ponteiro "p3". "p3" recebeu o endereço do quinto
    elemento do string "Ponteiros". Logo: "e".

    (e) Valor char dentro do endereço armazenado pelo ponteiro "p3". Este endereço pertence ao slot
    de memória da primeira posição do string armazenado em "nome". Logo: "P".

    (f) Valor char dentro da posição resultante de "quatro pulos de memória no string armazenado por
    nome". Desse modo, é o valor da quinta posição do string. Logo: "e".

    (g) Valor char dentro da posição anterior à resultante de "quatro pulos de memória no string armazenado
    por nome". Desse modo, é o valor na quarta posição do string. Logo: "t".

    (h) Valor int recebido por "idade" pelo ponteiro "p4". "p4" aponta para a primeira posição do vetor "vetor".
    Dessa forma, "idade" recebe o valor dentro de "&vetor[0]". Logo: 31.

    (i) Valor int recebido por "idade" pelo ponteiro "p5". "p5" dá "um pulo de memória em relação a p4", apontando
    para "&vetor[1]". Logo: 45.

    (j) Valor int recebido por "idade" pelo ponteiro "p4". "p4" dá "um pulo de memória em relação a p5", apontando
    para "&vetor[2]". Logo: 27.

    (l) Valor int recebido por "idade" pelo ponteiro "p4". "p5" regride "dois pulos de memória" em relação a sí,
    apontando, novamente, para "&vetor[0]". Logo: 31.

    (m) Valor int apontado por "p5". "p5" aponta para "um pulo anterior" ao terceiro slot de memória int do vetor "vetor".
    Logo: 45.

    (n) Valor int apontado por "p5". "p5" "pula" um endereço int do endereço que estava, &vetor[1] , ficando no &vetor[2].
    Logo: 27.
*/

  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("(a) %d \n", valor);

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("(c) %c \n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("(d) %c \n", aux);

  /* (e) */
  p3 = nome;
  printf("(e) %c \n", *p3);

  /* (f) */
  p3 = p3 + 4;
  printf("(f) %c \n", *p3);

  /* (g) */
  p3--;
  printf("(g) %c \n", *p3);

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade);

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("(l) %d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("(m) %d \n", *p5);

  /* (n) */
  p5++;
  printf("(n) %d \n", *p5);

  return(0);
}
