#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (for loop)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Simulação do movimento do Bispo (while loop)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Diagonal, cima, Direita %d\n", j);
        j++;
    }

    // Simulação do movimento da Rainha (do-while loop)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);

    return 0;
}