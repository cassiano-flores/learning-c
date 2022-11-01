#include <stdio.h>

int main() {

    FILE *ptr;
    char buffer[500];
    ptr = fopen("main.c", "r");

    if (ptr != NULL) {

        do {
            fgets(buffer, 500, ptr);
            puts(buffer);

        } while (!feof(ptr));  //" feof " retorna 1 se chegou no final do documento lido

    } else {
        printf("Problemas");
    }

    return 0;
}