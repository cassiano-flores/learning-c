#include <stdio.h>
#include <stdlib.h>

//Escrever a String digitada no teclado ao contrario e contar as vogais

int main(){

    char string[1024];
    int count = 0;         //em C tem que inicializar, se não, assume qualquer valor
    int countVogais = 0;

    printf("\nDigite a String a ser invertida: ");
    gets(string);

    while (string[count] != '\0'){
        count++;

        if (string[count] == 'a' || string[count] == 'e' || string[count] == 'i' || string[count] == 'o' || string[count] == 'u'){
            countVogais++;
        }
    }

    printf("\nQuantidade de letras: %d", count);
    printf("\nQuantidade de vogais: %d", countVogais);

    printf("\nPalavra ao contrario: ");

    while (count != -1){
        printf("%c", string[count]);
        count--;
    }

    return 0;
}
