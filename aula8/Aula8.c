//TEMA: criar uma nova struct de clube, que tem 5 jogadores, nome do clube, ano de fundação, estado, treinador (dadosJogador)
//Fazer uma função que cancula a média de idade dos jogadores

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dadosJogador{
    char nome[50];
    int idade;
    float altura;
    char peDom;
} dadosJogador;

typedef struct dadosTime{

    dadosJogador jogador[5];
    char treinador[50];
    char estado[50];
    char nome[50];
    int anoFundacao;

} dadosTime;


void imprimeDados(dadosJogador);  //funcao 1
dadosJogador cadastraJogador();  //funcao 2
float mediaIdade(dadosTime);     //funcao 3 

int main(){

    dadosTime time1;

    strcpy(time1.nome, "SC Internacional");  //para atribuir ao "time1" uma String (char) tem que ser com a função "strcpy()"
    strcpy(time1.treinador, "Mano");
    strcpy(time1.estado, "RS");
    time1.anoFundacao = 1909;   //para atribuir ao "time1" um número (int, double, etc), podemos atribuir direto

    for (int i = 0; i < 5; i++){
        
        time1.jogador[i] = cadastraJogador();  //cadastra 5 jogadores no time1
    }

    printf("Media idade dos jogadores: %f", mediaIdade(time1));

    return 0;
}

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

float mediaIdade(dadosTime time){

    float soma = 0;
    float mediaIdade = 0;
    
    for (int i = 0; i < 5; i++){
        
        soma += time.jogador[i].idade;
    }

    mediaIdade = soma/5;
    return mediaIdade;
}
