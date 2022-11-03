#include <stdio.h>

//obs: ponteiro para " void " é um ponteiro para qualquer coisa (diferente se fizesse int, por exemplo, teria um determinado tamanho)

int main() {

    FILE *ptr;

    ptr = fopen("arq_bin.txt", "wb");  //wb é write para binário

    double vet[10] = {54.1, 28, 4, 0, 0, 0, 0, 23, 24.2, 10};

    if (ptr != NULL) {

        for (int i = 0; i < 20; i++) {

            fwrite(&i, sizeof i, 1, ptr);   //escreve o que tem em i, do tamanho de i, 1 int por vez, no arquivo de "ptr"

        } //int tem 4 bytes (127 * 4 bytes escritos)

        //double tem 8 bytes (10 * 8 bytes escritos)
        fwrite(vet, sizeof (double), 10, ptr);  //sizeof (double) pega o byte de um dougle, e "vet" é de tamanho 10
        fwrite(vet, 1, sizeof vet, ptr);
        //double tem 8 bytes (1 * 80 bytes escritos)

        fclose(ptr);
        printf("Escrita feita");

    } else {
        printf("Deu problema!");
    }

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    ptr = fopen("arq_bin.txt", "rb");

    if (ptr != NULL) {

        int k = 34524;

        fseek(ptr, 9 * sizeof(int), SEEK_SET);  //procura o 10° elemento escrito
          //lê de ptr, o 9° (começa em 0) e multiplica pelo tamanho de cada dado no arquivo (int), a origem é do início (SEEK_SET)

        fread(&k, sizeof (k), 1, ptr);
        printf("Valor lido: %d\n", k);

    } else {
        printf ("Problemas");
    }

    return 0;
}
