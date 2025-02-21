#include <stdio.h>

int main() {

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("Movimentação do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}