#include <stdio.h>

//Definindo tamanho do tabuleiro e do navio
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main (){

    //Cria um tabuleiro 10x10 e inicializa com 0    
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    //Posiciona o primeiro navio horizontalmente linha 1, coluna 1
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro [1][1 + i] = 3;
    }

    //Posiciona o segundo navio verticalmente linha 4, coluna 7
    for (int i = 0; i < TAM_NAVIO; i++){
        tabuleiro [4 + i][7] = 3;
    }

    //Posiciona o terceiro navio na diagonal linha 0, coluna 5
    for (int i = 0; i< TAM_NAVIO; i++){
        tabuleiro[0 + i][5 + i] = 3;
    }

    //Posiciona o quarto navio na diagonal linha 6, coluna 9
    for (int i = 0; i < TAM_NAVIO; i++){
        tabuleiro[6 + i][9 - i] = 3;
    }

    //Exibe tabuleiro
    for (int i = 0; i < TAM_TABULEIRO; i++){
        for (int j = 0; j < TAM_TABULEIRO; j++){
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}