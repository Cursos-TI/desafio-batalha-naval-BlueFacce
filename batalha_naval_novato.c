#include <stdio.h>

int main() {
    // Cria o tabuleiro 10x10 e inicializa tudo com 0
    int tabuleiro[10][10] = {0};

    // Posiciona o navio horizontal (começa na linha 2, coluna 3)
    int navio1[3] = {3, 3, 3}; // Navio com 3 posições
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = navio1[i];
    }

    // Posiciona o navio vertical (começa na linha 5, coluna 6)
    int navio2[3] = {3, 3, 3}; // Navio com 3 posições
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][6] = navio2[i];
    }

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
