#include <stdio.h>
#include <stdlib.h>

//alocar memória dinâmica (quando não se sabe a quantidade de dados a processar)
int main() {

    int *ptr;

    ptr = malloc( sizeof (int) );

    *ptr = 10;

    printf("Valor na memoria %x eh %d\n", ptr, *ptr);

    free( ptr );    //libera a memoria

    return 0;
}
