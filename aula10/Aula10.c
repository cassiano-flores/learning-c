#include <stdio.h>
#include <stdlib.h>

//scanf("%d", &var) -> armazena no ENDERECO de "var", o que for digitado

//& (e unário) -> INDICA o endereço da variavel
//* (asterisco unário) -> ACESSA o valor armazenado no endereço indicado

int main() {

    int var, k;
    char c1;
    int vet[10];
    int *ptr;      //cria um ponteiro que APONTA para int, nao quer dizer que ele é um int
    char *pc;

    //inicia vet randomicamente
    for (k = 0; k < 10; k++){
        vet[k] = rand() % 10;
    }

    ptr = &var;  //ptr ja foi declarado como " *ptr ", entao podemos atribuir o endereço de "var" a ele
    *ptr = 100;  //acessa e atribui NA VARIAVEL do endereço que "ptr" aponta


    //declara ponteiro                                                       (int *ptr)
    //atribui endereço ao ponteiro                                          (ptr = &var)
    //acessa o valor da variavel que ptr tem endereço armazenado e modifica (*ptr = 100)


    printf("\nValor de 'var' atribuido atraves do ponteiro (em direcao): %d\n", var);

    printf("\nEndereco de var: %#x\n", &var);   //printa em HEXADECIMAL o ENDERECO de "var"
    printf("Endereco de k: %#x\n", &k);       //printa em HEXADECIMAL o ENDERECO de "k"

    for (int i = 0; i < 10; i++) {
        printf("Endereco de vet: %#x\n", &vet[i]);       //printa em HEXADECIMAL o ENDERECO de cada elemento de "vet"
    }

    ptr = &vet[0];
    printf("\nValor de vet[0]: %d\n", *ptr);  //imprime valor da variavel de ptr
    //igual printf("%d", vet[0]), porem imprime com o ponteiro
    printf("Valor de ptr (endereco armazenado): %#x\n", ptr);

    ptr++; //agora aponta para o PRÓXIMO endereço na memória (pula de 4 em 4 bytes porque atribuimos "int" ao "ptr")
    //*ptr = 100 irá atribuir o valor a vet[1], que é o próximo int na memória

    pc = &c1;
    var = 1234;

    printf("\npc: %#x, valor: %d\n", pc, *pc);
    pc = &var;
    printf("pc: %#x, valor: %d\n", pc, *pc);
    pc++;
    printf("pc: %#x, valor: %d\n", pc, *pc);

    return 0;

    //chamada por referência

    //void funcao (float *p);       recebe um endereço, então na hora de chamar, o parâmetro deve ser um endereço

    //  funcao (&var) {
    //    ...
    //  }
}
