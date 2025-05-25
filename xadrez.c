#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int movimentos_bispo = 0;
    while (movimentos_bispo < 5) {
        printf("Cima, Direita\n"); // Imprime a direção do movimento diagonal
        movimentos_bispo++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int movimentos_rainha = 0;
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        movimentos_rainha++;
    } while (movimentos_rainha < 8);
    printf("\n");

    // Movimento do Cavalo (duas casas para cima e uma para a esquerda)
    printf("\nMovimento do Cavalo:\n");
    // Loop externo para as duas casas para cima (usando for)
    for (int cima = 0; cima < 2; cima++) {
        printf("Cima\n");
    }
    // Loop interno para uma casa para a esquerda (usando while)
    int esquerda = 1;
    while (esquerda > 0) {
        printf("Esquerda\n");
        esquerda--;
    }
    printf("\n");

    return 0;
}