#include <stdio.h>
#include <string.h>


//Fazer uma função que cadastre uma nova pessoa (lê do teclado uma pessoa)
//Fazer uma função que troca o valor das variáveis (atribui um novo valor ao atributo de struct) void troca(_*, _*);

struct teste {  //tipo uma classe

    int idade;
    float altura;
    char nome[50];
};

void printTeste(const struct teste *pps) { //recebe o ENDEREÇO de uma variavel do tipo "struct teste"

    printf("Nome: %s\n", pps->nome);  //usa " -> " porque pps é um ponteiro!!!
    printf("Idade: %d, altura: %.2f\n", pps->idade, pps->altura);
}

void printTestePior(struct teste aux) { //recebe uma variavel do TIPO "struct test"

    printf("Nome: %s\n", aux.nome);  //igual java
    printf("Idade: %d, altura: %.2f\n", aux.idade, aux.altura);
}

int main() {

    struct teste pessoa;   //isso é uma variável, que contém 3 atributos (idade, altura e nome[50]), tipo uma classe
    struct teste *pps;   //aponta para o endereço, pode manipular o que tem nesse campo
    struct teste muitasPessoas[10];

    pps = &pessoa;

    //(*pps).idade  = acessa o campo "idade" e pode atribuir um valor
    //pps -> idade  = acessa o campo "idade" e pode atribuir um valor
    //pps.idade     = acessa somente o endereço

    pps->altura = 1.92;
    pps->idade = 25;
    strcpy(pps->nome, "Cassiano");

    printTestePior(pessoa);
    //printTestePior(*pps)

    printf("\n");

    printTeste(&pessoa);
    //printTeste(pps)

    pps = muitasPessoas;  //o primeiro endereço de pps (pps = &pessoa) vai receber o primeiro index de muitaspessoas

    pps->altura = 1;   //atribuindo por endereço de ponteiro, na primeira posição de muitaspessoas (muitaspessoas[0])
    pps->idade = 4;
    strcpy(pps->nome, "Caninho");

    pps++;  //muitasPessoas[1]

    *pps = pessoa;  //atribui pessoa a muitasPessoas[1]

    printf("\n");

    printTeste(&muitasPessoas[0]);  //printTestePior(muitasPessoas[0]);
    printTeste(&muitasPessoas[1]);  //printTestePior(muitasPessoas[0]);

    return 0;
}
