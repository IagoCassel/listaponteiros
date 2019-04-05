/*Q20. Pesquise na Internet sobre o uso da biblioteca libGC, que implementa um coletor de lixo em C. 
O processo de instalação dessa biblioteca em sistemas Windows pode ser um pouco trabalhoso. Entretanto, em sistemas Unix, 
a instalação é bem simples, de sorte que se recomenda a resolução desta questão em uma máquina, por exemplo, com Linux instalado. 
Caso seja usuário Windows e não queira instalar sistemas alternativos em seu computador, use uma ferramenta de virtualização 
(ex: VirtualBox) para instalar e executar o Linux sem alterar a instalação original de seu computador. 
Prepare um pequeno programa-exemplo demonstrando como usar a biblioteca. */

#include <gc.h>
#include <assert.h>
#include <stdio.h>

int main(){
     GC_INIT(); //Inilializa a LibGC
        int *p = (int *) GC_MALLOC(1000*sizeof(int)); //A memória é alocada por meio da função GC_MALLOC, sem a necessidade de utilizar o free.
        int *q = (int *) GC_MALLOC(1000*sizeof(int));
        *p = 50;
        *q = 25;
        int soma = *p + *q;
        printf("A soma e %d", soma); 
     return 0;
}

