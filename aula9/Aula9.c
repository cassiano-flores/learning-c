#include <stdio.h>

//Campos de bit:
//É possível definir uma estrutura cujos campos tem tamanho menor do que 8 bits (1 byte = char)

//Exemplo CAMPO DE BIT
struct exemplo {
    int a; //inteiro de 4 byes com sinal
    float b; //ponto flutuante com 4 bytes
    char c; //inteiro com sinal com 1 byte
    unsigned f1 : 4 //inteiro sem sinal de 4 BITS
};

//Exemplo ENUM
enum cod_cores {
    preto,
    marrom,
    vermelho,
    laranja,
    aamarelo,
    verde,
    azul,
    roxo,
    cinza,
    branco
};

int main() {

    struct exemplo aux;
    enum cod_cores faixa1;

    faixa1 = marrom;
    printf("%d \n", faixa1);

    aux.f1 = 0;
    aux.c = 0;

    do {
        aux.f1++;
        aux.c++;
        printf("%d ", aux.f1);

    } while (aux.c < 100);
    
    return 0;
}
