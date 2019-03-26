#include <stdio.h>
#include <stdlib.h>

int comparador(float *v1, float *v2)
{
    return (*(int*)v1 - *(int*)v2);
}

int main()
{
    /*
      15. Reimplemente o programa da questão anterior utilizando a função qsort() do C.
          Comente o seu código, explicando o que faz cada uma das linhas.
    */
    int n = 5, i;
    float *v;

    v = (float *) malloc(n*sizeof(float));
    v[0] = 2.4;
    v[1] = 1.3;
    v[2] = 1.2;
    v[3] = 5.4;
    v[4] = 3.2;

    qsort(v, n, sizeof(float), comparador);

	for(i=0;i<n;i++){
		printf("%f ", v[i]);
	}

	free(v);

    return 0;
}
