#include <gc.h>
#include <assert.h>
#include <stdio.h>

int main(){
     GC_INIT();
        int *p = (int *) GC_MALLOC(1000*sizeof(int));
        int *q = (int *) GC_MALLOC(1000*sizeof(int));
        *p = 50;
        *q = 25;
        int soma = *p + *q;
        printf("A soma e %d", soma); 
     return 0;
}

