#include <stdio.h>

int main() {

    int peca;

    printf("Bem-Vindo ao Jogo de Xadrez!\n\n");
    printf("Com que peça você deseja jogar?\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &peca);

    switch (peca) {
        case 1:
            // Movimentação da Torre: 5 casas para a direita
            printf("Você escolheu a Torre!\n");
            printf("Movimentação da Torre:\n");
            for (int i = 0; i < 5; i++) {
                printf("Direita\n");
            }
            printf("\n");
            break;
        
        case 2:
            // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
            printf("Você escolheu o Bispo!\n");
            printf("Movimentação do Bispo:\n");
            int j = 0;
            while (j < 5) {
                printf("Cima, Direita\n");
                j++;
            }
            printf("\n");
            break;

        case 3:
            // Movimentação da Rainha: 8 casas para a esquerda
            printf("Você escolheu a Rainha!\n");
            printf("Movimentação da Rainha:\n");
            int k = 0;
            do {
                printf("Esquerda\n");
                k++;
            } while (k < 8);
            printf("\n");
            break;

        case 4:
            // Movimentação do Cavalo (movimento em L)
            printf("Você escolheu o Cavalo!\n");
            printf("Movimentação do Cavalo (simulando 3 movimentos em L):\n");
            // Cavalo pode mover 2 casas em uma direção e 1 casa em uma direção perpendicular (movimento em L)
            // Vamos simular 3 movimentos possíveis
            for (int i = 0; i < 3; i++) {
                printf("2 casas para frente e 1 para a direita\n");
                printf("1 casa para frente e 2 para a direita\n");
            }
            printf("\n");
            break;

        default:
            printf("Peça inválida!\n");
            break;
    }

    return 0;
}