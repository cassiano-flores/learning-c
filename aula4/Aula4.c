#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia uma frase do teclado e imprima em binário

int main(){

    char str[1024];

    printf("Digita uma frase: ");
    gets(str);

    //convertToBin(str);   usar a funcao

    int ind = 0;

    do{
        printBin(str[ind++]);
        putchar(' ');
        if( !(ind % 10) )  putchar('\n');

    }while(str[ind] != '\0');

    
    return 0;
}

void printBin(unsigned char x){

    unsigned char mask = 0x80;
    int k;

    for(k = 0; k < 8; k++){

        (x & mask) ? putchar('1') : putchar('0');
        mask = mask >> 1;
    }
}


void convertToBin(char str[1024]){  //por funcao, sem estar na main

    for (int i = 0; str[i] != '\0'; i++){

        printBin(str[i]);
        putchar('\n');
    }
}
