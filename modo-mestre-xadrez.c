#include <stdio.h>

// Função recursiva para movimentar a Torre
//Torre movimentará 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita %d\n", casas);
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo com loops aninhados
//Bispo movimentará 5 casas na diagonal pra cima a direita
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return;
    
    for (int i = 1; i <= casasHorizontais; i++) {
        printf("Diagonal, cima, Direita %d\n", i);
    }

    moverBispo(casasVerticais - 1, casasHorizontais);
}

// Função recursiva para movimentar a Rainha
//A rainha movimentará 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda %d\n", casas);
    moverRainha(casas - 1);
}

// Movimento do Cavalo com loops aninhados e controle de fluxo
//o cavalo movimentará 2 casa para cima e 1 para direita
void moverCavalo(int casasCima, int casasDireita) {
    printf("\nMovimento do Cavalo:\n");

    for (int i = 1; i <= casasCima; i++) {
        printf("Cima %d\n", i);
    }

    for (int j = 1; j <= casasDireita; j++) {
        if (j == 2) continue; // Apenas um controle para demonstrar o uso de 'continue'
        printf("Direita %d\n", j);
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverCavalo(2, 1);

    return 0;
}