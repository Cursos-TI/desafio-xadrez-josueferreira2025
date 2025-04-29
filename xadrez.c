#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (for loop)
    //Torre, movimente-se 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Simulação do movimento do Bispo (while loop)
    //Bispo, movimente-se 5 casas na diagonal pracima e a direita
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Diagonal, cima, Direita %d\n", j);
        j++;
    }

    // Simulação do movimento da Rainha (do-while loop)
    //Rainha, aplique xeque mate movimentando oito casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8); 

    return 0;
}