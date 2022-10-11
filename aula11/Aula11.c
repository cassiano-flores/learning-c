#include <stdio.h>

//função que soma n inteiro de memória
//a partir do endereço enviado para ptr

int soma(int *ptr, int n) {  //passa um ponteiro (valor que tem em determinado endereço) e um número "n" para somar

    int sum = 0;
    do {

        sum = sum + *ptr;  //soma o que já tem em soma + o valor do que tem no endereço de "ptr"
        ptr++;
         
    } while(--n);  //primeiro decrementa

    return sum;
}

int soma2(int ptr[], int n) {  //passa um vetor (que também é um endereço)

    int sum = 0;
    do {

        sum = sum + ptr[n-1];  //soma com o valor do vetor, faz de traz para frente
        ptr++;
         
    } while(--n);

    return sum;
}

int main() {
    
    int resultado;
    int vetor[10] = {5,5,-8,7,-8,8,-7,0,1,5};

    resultado = soma(vetor, 5);

    printf("Resultado da soma dos n números do vetor: %d", resultado);

    return 0;
}
