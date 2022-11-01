#include <stdio.h>

int main() {

    FILE *ptr;
    char buffer[500];
    int var1, var2;
    int lon, lat;

    ptr = fopen("arquivo.txt", "r");  //fopen retornar um endereço e armazena em ptr

    if (ptr != NULL) {  //sempre bom fazer, garante que conseguiu ler o arquivo

        fscanf(ptr, "%s", buffer);     //lê até o primeiro espaço, tabulação ou nova linha (apenas uma string do arquivo)
        printf("%s\n", buffer);   //buffer = &buffer[0]

        fgets(buffer, 500, ptr);       //lê também o espaço (lê tudo da string até o máximo determinado, numa linha (detecta \n))
        printf("%s\n", buffer);

        fgets(buffer, 500, ptr);
        var1 = atoi(buffer);     //" atoi " converte string em número, para operar em cima
        var2 = itoa(buffer);     //" itoa " converte número em string
        printf("%d\n", var1*2);

        fscanf(ptr, "%s", var2);
        printf("%s\n", &var2);   //precisa de " & "

        fscanf(ptr,"%d#%d", &lon, &lat);   //no parâmetro que indica o formato, é passado 2 int, que VÃO SER SEPARADOS POR " # "
        printf("Longitude: %d\nLatitude: %d\n", lon, lat);

    } else {
        printf("Problemas na abertura do arquivo\n");
    }

    return 0;
}
