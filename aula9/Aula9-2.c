#include <stdio.h>

//Ponteiro: variável que armazena um endereço!!
//Ponteiro sempre é de 4 bits
//Sempre devemos saber e informar o tipo da variável que o ponteiro irá armazenar o endereço
//int p (variável p do tipo int)
//int *p (*p agora é um ponteiro, usamos para ARMAZENAR O ENDEREÇO, antes não era necessariamente o endereço)

//Operadores unários: & e *
//& : guarda o endereço de uma variável
//* : acessa o valor que a variável armazena

int main() {
    
    int var; //aloca memória para um int
    int *p; //define um ponteiro para int

    var = 10;

    //p = var;    p recebe o VALOR de var
    p = &var;   //p recebe o ENDEREÇO de var

    *p = 20;  //no endereço em que P aponta, atribua 20

    printf("Valor de var: %d/n", var);

    return 0;
}
