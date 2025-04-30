//jogo de xadrez nível novato

#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (for loop)
    //Torre, movimente 5 casas para a direita 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Simulação do movimento do Bispo (while loop)
    //Bispo, movimente 5 casas na diagonal para cima a direita
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Diagonal, cima, Direita %d\n", j);
        j++;
    }

    // Simulação do movimento da Rainha (do-while loop)
    //Rainha, movimente 8 cas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);

    // Simulação do movimento do Cavalo (loops aninhados)
    //Cavalo, movimente 2 casas para baixo, agora 1 casa para a esquerda
    printf("\nMovimento do Cavalo:\n");
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop para movimentar duas casas para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo %d\n", i);
    }

    // Loop para movimentar uma casa para a esquerda
    int l = 1;
    while (l <= casasEsquerda) {
        printf("Esquerda %d\n", l);
        l++;
    }



    return 0;
}