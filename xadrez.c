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

    return 0;
}