#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fazer um programa que gera uma matriz N x N randomicamente e calcule a média da diagonal secundária

#define N 3

int main(){

    int mat[N][N], i, j;
    int d2 = 0;

    for (i = 0; i < N; i++){

        for (j = 0; j < N; j++){

            mat[i][j] = rand() % 100;
            printf("%4d", mat[i][j]);
        }

        printf("\n");

        d2 += mat[i][j-1-i];
    }

    printf("\nMedia: %f", (float)d2/N);

    return 0;
}
