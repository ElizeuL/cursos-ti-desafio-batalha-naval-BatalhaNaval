
#include <stdlib.h> // Para abs()

int main() {
    int tabuleiro[5][5];
    int i, j;

    // Habilidade em cone
    // Usando distância Manhattan para desenhar a forma de cone invertido
    printf("Habilidade em cone:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (abs(2 - i) + abs(2 - j) <= 2) {
                tabuleiro[i][j] = 1;
            } else {
                tabuleiro[i][j] = 0;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Habilidade em octaedro
    printf("\nHabilidade em octaedro:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            // Padrão octaedro conforme exemplo
            if ((i == 0 && j == 2) ||
                (i == 1 && (j >= 1 && j <= 3)) ||
                (i == 2 && j == 2)) {
                tabuleiro[i][j] = 1;
            } else {
                tabuleiro[i][j] = 0;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Habilidade em cruz
    printf("\nHabilidade em cruz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            // Padrão cruz conforme exemplo
            if ((i == 0 && j == 2) ||
                (i == 1) ||
                (i == 2 && j == 2)) {
                tabuleiro[i][j] = 1;
            } else {
                tabuleiro[i][j] = 0;
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
