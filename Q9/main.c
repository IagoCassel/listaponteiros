#include <stdio.h>
#include <stdlib.h>

int main()
{
/*9. O que fazem os seguintes programas em C?

     int main(){
        int vet[] = {4,9,13};
        int i;
        for(i=0;i<3;i++){
            printf("%d ",*(vet+i));
        }
     }

     int main(){
        int vet[] = {4,9,13};
        int i;
        for(i=0;i<3;i++){
            printf("%X ",vet+i);
        }
     }

    R:

    for(i=0;i<3;i++){
            printf("%d ",*(vet+i));
        }

    Mostra o valor int de cada componente do vetor "vet".

    for(i=0;i<3;i++){
            printf("%X ",vet+i);
        }
    Mostra o endereço de cada componente do vetor "vet".

*/

    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
        printf("%X\n",vet+i);
    }

    return 0;
}
