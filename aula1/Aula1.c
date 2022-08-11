#include <stdio.h>
#include <stdlib.h>

/* Faca um programa em C que leia do teclado um vetor de 5 elementos (int) e apresente a media dos elementos impares apenas */

// sizeof(vet) -> determina o tamanho de um array em memória (ex: vet[5] é int, int tem 4 bytes, vet tem comprimento de 5, 5*4 = 20 é o tamanho em memória)
// sizeof(vet)/sizeof(vet[0]) - > determina o comprimento de um array, divide o tamanho em memória pelo tamanho de 1 índice, retorna quantidade de elementos que suporta no array (lenght)

int main () {

    int vet[5];
    int count = 0;
    float media = 0;
    float result;

    for (int i=0; i < 5; i++){

        printf("Digite o elemento do indice %d:  ", i+1);
        scanf("%d", &vet[i]);

        if (vet[i] % 2){    //if (vet[i] % 2 != 0)  eh desnecessario, uma operacao a mais

            media = media + vet[i];
            count++;
        }
    }

    //putchar('\n');  -> imprime 1 caracter so , poderia ser printf("\n");

    result = media / count;
    printf("\nA media dos numeros impares do vetor eh: %f", result);  //%f ->  %5f ou %-5f  imprime com MINIMO de casas decimais

    return 0;
}