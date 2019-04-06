#include <stdio.h>
#include <stdlib.h>

/*
16. Utilize a ideia do ponteiro para função pela função qsort() para
    implementar sua própria função de ordenação. Para isso, sua função
    deverá receber, entre outros argumentos, um ponteiro para a função
    de comparação.
*/

float comparador (float *v1, float *v2){
  return (*v1 - *v2);
}

int main(){

  int n, i, j;
  float t;

  printf("Diga o numero de componentes do vetor: ");
  scanf("%d",&n);
  printf("\n");

/* Vetor v e alocação da sua memória. */

  float *v;
  v=(float*) malloc(n*sizeof(float));

  printf("Insira os elementos: \n");
  printf("\n");
  for(i=0; i<n; i++){
    printf("Elemento %d: ", i);
    scanf("%f", &v[i]);
    printf("\n");
  }

  printf("Antes: \n");
  for(i=0; i<n; i++){
    printf("%f ", v[i]);
  }
  printf("\n\n");

  /* Função de ordenação do vetor, usando a função de comparação usual do qsort. */

  for (i=0; i<(n-1); i++){
    for (j=(i+1); j<n; j++){
      if(comparador(&v[i],&v[j])>0){
        t = v[i];
        v[i] = v[j];
        v[j] = t;
      }
    }
  }

  printf("Depois: \n");
  for(i=0; i<n; i++){
    printf("%f ", v[i]);
  }
  printf("\n\n");

return 0;
}
