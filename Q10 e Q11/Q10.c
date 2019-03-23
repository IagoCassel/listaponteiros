#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x1[4];
	int x2[4];
	float x3[4];
	double x4[4];
	/*A quest�o faz a suposi��o de que a m�quina utilize o char ocupando 1 byte, 
	o int ocupando 2 bytes, o float ocupando 4 bytes e o double ocupando 8 bytes.
	Para cada uma das somas, a quantidade de bits seria acrescentada para chegar a pr�xima posi��o
	do array, para +1, dependendo do tipo, acrescentaria 1, 2, 4 ou 8 bits para cada endere�o
	dependendo do tipo de array, e assim sucessivamente para +2 e +3;
	Na realidade somente o tipo INT se comporta de forma diferente, tendo valor de 4 bytes tamb�m
	o codigo abaixo demonstra como se comporta cada soma na maquina real. */
	printf("%d %d %d %d\n", x1, x1+1, x1+2, x1+3);
	//O tipo char ocupa 1 Byte, a cada soma, � acrescentado 1 bit para a proxima posi��o do array;
	printf("%d %d %d %d \n", x2, x2+1, x2+2, x2+3);
	//O tipo int ocupa 4 Bytes, a cada soma, � acrescentado 4 bits para a proxima posi��o do array;
	printf("%d %d %d %d\n", x3, x3+1, x3+2, x3+3);
	//O tipo float ocupa 4 Bytes, a cada soma, � acrescentado 4 bits para a proxima posi��o do array;
	printf("%d %d %d %d\n", x4, x4+1, x4+2, x4+3);
	//O tipo double ocupa 8 Bytes, a cada soma, � acrescentado 8 bits para a proxima posi��o do array;
	return 0;
}
