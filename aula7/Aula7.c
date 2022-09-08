//#include (bibliotecas)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define (constantes)
//- nada -

//variáveis globais (uma variável fora de qualquer função, não é local)
//- nada -

//struct's  (igual classes para criar um novo tipo)
typedef struct dadosJogador{
    char nome[50];
    int idade;
    float altura;
    char peDom;
} dadosJogador;

//typedef struct dadosJogador dadosJogador;

//protótipos (declaração das funções)
void imprimeDados(dadosJogador);
dadosJogador cadastraJogador();

//programa principal
int main(){

    dadosJogador jogador = cadastraJogador();

    imprimeDados(jogador);

    return 0;
}

//implementação das funções (protótipos)
void imprimeDados(dadosJogador jogador){

    printf("\nNome: %s", jogador.nome);
    printf("\nIdade: %d, Altura: %f\n", jogador.idade, jogador.altura);
    
    switch(jogador.peDom){
        case 'D':
        printf("Pé dominante: Destro\n");
        break;

        case 'E':
        printf("Pé dominante: Canhoto\n");
        break;

        case 'A':
        printf("Pé dominante: Ambidestro\n");
        break;

        default: printf("Código inválido");
    }
}

dadosJogador cadastraJogador(){

    dadosJogador jogador;

    printf("\nDigite o nome: ");
    fflush(stdin);
    gets(jogador.nome);

    printf("Digite a idade: ");
    scanf("%d", &jogador.idade);

    printf("Digite a altura: ");
    scanf("%f", &jogador.altura);

    printf("Digite o pé dominante (D/E/A): ");
    fflush(stdin);
    jogador.peDom = getchar();

    return jogador;
}
