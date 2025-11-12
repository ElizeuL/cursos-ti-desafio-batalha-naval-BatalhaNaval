#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {{0}};

    // Posiciona navios no tabuleiro:
    // Navio horizontal (3 posições) na linha 9, colunas 7 a 9
    tabuleiro[9][7] = 3;
    tabuleiro[9][8] = 3;
    tabuleiro[9][9] = 3;

    // Navio vertical (3 posições) na coluna 0, linhas 5 a 7
    tabuleiro[5][0] = 3;
    tabuleiro[6][0] = 3;
    tabuleiro[7][0] = 3;

    // Navio na diagonal principal (4 posições) da coordenada (1,1) até (4,4)
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;

    // Navio na diagonal secundária (4 posições) da coordenada (6,6) até (9,9)
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][9] = 3;

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10 com navios posicionados (0 para vazio, 3 para navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
