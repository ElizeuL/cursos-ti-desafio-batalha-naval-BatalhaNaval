#include <stdio.h>
#include <stdlib.h> // para abs()

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro1[5][5] = {{0}};

    // Navio vertical (2 posições)
    tabuleiro1[0][1] = 3;
    tabuleiro1[1][1] = 3;
    printf("Nível Novato - Navio vertical nas coordenadas: (0,1) e (1,1)\n");

    // Navio horizontal (2 posições)
    tabuleiro1[3][3] = 3;
    tabuleiro1[3][4] = 3;
    printf("Nível Novato - Navio horizontal nas coordenadas: (3,3) e (3,4)\n");

    // Exibir tabuleiro Nível Novato
    printf("Tabuleiro Nível Novato (5x5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro1[i][j]);
        }
        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
