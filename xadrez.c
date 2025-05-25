#include <stdio.h>

// Função recursiva para o movimento da Torre para a direita
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo na diagonal direita para cima
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha para a esquerda
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    // Movimento da Torre usando recursividade
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // Movimento do Bispo usando recursividade
    printf("Movimento do Bispo:\n");
    int casasBispoRecursivo = 5;
    moverBispoRecursivo(casasBispoRecursivo);
    printf("\n");

    // Movimento da Rainha usando recursividade
    printf("Movimento da Rainha:\n");
    int casasRainhaRecursivo = 8;
    moverRainhaRecursivo(casasRainhaRecursivo);
    printf("\n");

    // Movimento do Cavalo usando loops
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) {
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }
        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    // Movimento do Bispo usando loops aninhados
    printf("Movimento do Bispo:\n");
    int movimentosVerticalBispo = 5;
    int movimentosHorizontalBispo = 1; // Para manter a diagonal
    for (int v = 0; v < movimentosVerticalBispo; v++) {
        for (int h = 0; h < movimentosHorizontalBispo; h++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    return 0;
}