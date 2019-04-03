/* Suponha que as seguintes declarações tenham sido realizadas:

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido: */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	aloha[2] = value;
	scanf("%f", &aloha);
	/*A expressão abaixo está errada, é feita a tentativa de por um array em aspas duplas
	em uma variavel declarado como float.*/
	aloha = "value";
	printf("%f", aloha);
	coisas[4][4] = aloha[3];
	/*A expressão abaixo tenta por um array tamanho 10 com um array de tamanho 5, resultando em
	incompatibilidade no momento da igualdade.*/
	coisas[5] = aloha;
	/*Não se pode inserir um valor a uma variavel declarada como ponteiro, o usuário deveria por *pf ou
	indicar &value para corrigir este problema.*/
	pf = value;
	pf = aloha;
	return 0;
}
