#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*6. Determine o que ser� mostrado pelo seguinte programa (compile-o, execute-o e verifique se
     foram obtidas as respostas esperadas).

    int main(void){
        float vet[5] = {1.1,2.2,3.3,4.4,5.5};
        float *f;
        int i;
        f = vet;
        printf("contador/valor/valor/endereco/endereco");
        for(i = 0 ; i <= 4 ; i++){
            printf("\ni = %d",i);
            printf("vet[%d] = %.1f",i, vet[i]);
            printf("*(f + %d) = %.1f",i, *(f+i));
            printf("&vet[%d] = %X",i, &vet[i]);
            printf("(f + %d) = %X",i, f+i);
        }
    }

    R:

    "printf("\ni = %d",i);" ir� mostrar o valor do contador "i" dentro do la�o.

    "printf("vet[%d] = %.1f",i, vet[i]);" mostrar� o valor do componente "i" do vetor "vet".

    "printf("*(f + %d) = %.1f",i, *(f+i));" tamb�m mostrar� o valor do componente "i" do vetor "vet".

    "printf("&vet[%d] = %X",i, &vet[i]);" mostra o endere�o do componente "i" do vetor "vet".

    "printf("(f + %d) = %X",i, f+i);" tamb�m mostra o endere�o do componente "i" do vetor "vet".

*/

  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ",i);
    printf("vet[%d] = %.1f ",i, vet[i]);
    printf("*(f + %d) = %.1f ",i, *(f+i));
    printf("&vet[%d] = %X ",i, &vet[i]);
    printf("(f + %d) = %X ",i, f+i);
  }

  return 0;
}
