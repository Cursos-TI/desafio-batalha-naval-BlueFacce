#include <stdio.h>

//Definindo tamanho do tabuleiro, navio e habilidade
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define TAM_HABILIDADE 5

int main(){

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

    //Matriz habilidade cone
    int cone[TAM_HABILIDADE][TAM_HABILIDADE] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    //Matriz habilidade cruz
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    //Matriz habilidade octaedro
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };
    
    //Aplica habilidade cone em 2,2
    for (int i = 0; i < TAM_HABILIDADE; i++){
        for (int j = 0; j < TAM_HABILIDADE; j++){
            if (cone[i][j] == 1){
                int linha = 2 + i - 2;
                int coluna = 2 + j - 2;
                if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO){
                    tabuleiro[linha][coluna] = 5;
                }
            }
            //Habilidade cruz em 5,5
            if (cruz [i][j] == 1){
                int linha = 5 + i - 2;
                int coluna = 5 + j - 2;
                if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO){
                    tabuleiro[linha][coluna] = 5;
                }
            }
            //Habilidade octadreo em 7,7
            if (octaedro[i][j] == 1){
                int linha = 7 + i - 2;
                int coluna = 7 + j - 2;
                if(linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO){
                    tabuleiro[linha][coluna] = 5;
                }
            }

        }
    }

    //Exibir tabuleiro
    for(int i = 0; i < TAM_TABULEIRO; i++){
        for(int j = 0; j < TAM_TABULEIRO; j++){
            if (tabuleiro[i][j] == 0){
                printf("0 ");//Agua
            } else if (tabuleiro[i][j] == 3){
                printf("3 ");//Navio
            } else if (tabuleiro[i][j] == 5){
                printf("5 ");//Habilidade
            }
        }
        printf("\n");
    }
    return 0;
}
