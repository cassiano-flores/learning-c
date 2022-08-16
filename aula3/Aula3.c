#include <stdio.h>

//Faça uma função que recebe um byte (char sem sinal) e imprime na tela o número em binário.
//decimal = base 10  |  binario = base 2

int main(){

    /*                                      ALGUNS EXEMPLOS PRA COPIAR DEPOIS
    unsigned char a = 6, b = 5;
    printf("a || b = %d (%x)\n", a||b, a||b);
    printf("a && b = %d (%x)\n", a&&b, a&&b);
    printf("a | b = %d (%x)\n", a|b, a|b);
    printf("a & b = %d (%x)\n", a&b, a&b);
    printf("a ^ b = %d (%x)\n", a^b, a^b);

    a = 0x32;
    a = a << 2;

    printf("a = %d (%#x)\n", a, a);
    */

    printBinario(9);
    putchar('\n');
    printBin(9);

    return 0;
}

void printBinario(unsigned char numero){

    if (numero == 0){
        printf("0");
        return;
    }

    int vet[32];  //assumindo 32 bit integer
    int cont = 0;

    for (int i = 0; numero > 0; i++){

        vet[i] = numero % 2;
        numero = numero / 2;
        cont++;
    }
    
    for (int j = cont - 1; j >= 0; j--){

        printf("%d", vet[j]);
    }
    
    /*                          EU TINHA FEITO ASSIM, VER ERRO
    while (cont > 0){

        printf("%d", vet[cont]);
        cont--;
    }
    */
}

void printBin(unsigned char x){  //exemplo do sor

    unsigned char mask = 0x80;  //inicia mask como hexadecimal -> 0x (default) 8 = 1000  0 = 0000
    int k;

    for(k = 0; k < 8; k++){

        (x & mask) ? putchar('1') : putchar('0');
        mask = mask >> 1;
        //mask >> 1;
    }
}