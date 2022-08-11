#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
    Fazer um programa para jogar par ou impar com o PC   (com if-else)
        -->  Ganha o jogo quem vencer 3 partidas consecutivas (empate nao conta, mas pode dar empate)
*/

int main() {

    char choosePlayer;
    int numberPlayer;
    char choosePC;
    int numberPC;
    char winners[3];

    srand(time(NULL));  //randomizar, somente o rand() iria sempre repetir os numeros aleatorios

        for (int i = 0; i < 3; i++){  //até 3 vitorias consecutivas
            
            printf("\nVoce escolhe par ou impar? (p/i): ");  //par/impar do player
            scanf("%s", &choosePlayer);

            printf("\nDigite o numero: ");  //numero do player
            scanf("%d", &numberPlayer);

            numberPC = rand();   //numero do pc
            if ((numberPC % 2) == 0){     //par/impar do pc

                choosePC = 'p';
            }
            else{
                choosePC = 'i';
            }

            //------------------------------------------------------------------------------

            if (choosePlayer == choosePC){   //se for empate, zera tudo e começa de novo
                printf("\nEMPATE!\n");
                i = -1;
            }
            else{

                if (((numberPlayer + numberPC) % 2) == 0){   //deu par
                    printf("\nDEU PAR!\n");

                    if (choosePlayer == 'p'){    //jogador escolheu par

                        if (i == 0){

                            winners[i] = 'j';
                        }
                        else{

                            if (winners[i-1] == 'j'){  //ultima rodada o jogador ganhou

                                winners[i] = 'j';
                            }
                            else{

                                winners[0] = 'j';
                                i = 0;               //se nao tinha sido o jogador, reseta a sequencia
                            }
                        }
                    }
                    else{                //maquina escolheu par

                        if (i == 0){

                            winners[i] = 'm';
                        }
                        else{

                            if (winners[i-1] == 'm'){  //ultima rodada a maquina ganhou

                                winners[i] = 'm';
                            }
                            else{

                                winners[0] = 'm';
                                i = 0;               //se nao tinha sido a maquina, reseta a sequencia
                            }
                        }
                    }
                }
                else{    //deu impar
                    printf("\nDEU IMPAR!\n");

                    if (choosePlayer == 'i'){    //jogador escolheu impar

                        if (i == 0){

                            winners[i] = 'j';
                        }
                        else{

                            if (winners[i-1] == 'j'){  //ultima rodada o jogador ganhou

                                winners[i] = 'j';
                            }
                            else{

                                winners[0] = 'j';
                                i = 0;               //se nao tinha sido o jogador, reseta a sequencia
                            }
                        }
                    }
                    else{                //maquina escolheu impar

                        if (i == 0){

                            winners[i] = 'm';
                        }
                        else{

                            if (winners[i-1] == 'm'){  //ultima rodada a maquina ganhou

                                winners[i] = 'm';
                            }
                            else{

                                winners[0] = 'm';
                                i = 0;               //se nao tinha sido a maquina, reseta a sequencia
                            }
                        }
                    }
                }
            }
        }

        if (winners[0] == 'j'){
            printf("\nJOGADOR VENCEU!");
        }
        else{
            printf("\nMAQUINA VENCEU!");
        }

    return 0;
}