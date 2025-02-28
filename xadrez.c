#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorre(int x, int y, int limite, char direcao) {
    if (x < 0 || x >= limite || y < 0 || y >= limite) {
        return;  // Base da recursão: fora do tabuleiro
    }

    if (direcao == 'C') {
        printf("Mover para Cima\n");
        moverTorre(x - 1, y, limite, direcao);  // Movimento para cima
    } else if (direcao == 'B') {
        printf("Mover para Baixo\n");
        moverTorre(x + 1, y, limite, direcao);  // Movimento para baixo
    } else if (direcao == 'E') {
        printf("Mover para Esquerda\n");
        moverTorre(x, y - 1, limite, direcao);  // Movimento para esquerda
    } else if (direcao == 'D') {
        printf("Mover para Direita\n");
        moverTorre(x, y + 1, limite, direcao);  // Movimento para direita
    }
}

// Função recursiva para mover o Bispo, incluindo diagonais
void moverBispo(int x, int y, int limite, int dx, int dy) {
    if (x < 0 || x >= limite || y < 0 || y >= limite) {
        return;  // Base da recursão: fora do tabuleiro
    }

    printf("Mover para Diagonal: Cima, Direita\n");
    moverBispo(x + dx, y + dy, limite, dx, dy);  // Diagonal superior direita

    printf("Mover para Diagonal: Baixo, Direita\n");
    moverBispo(x + dx, y + dy, limite, dx, dy);  // Diagonal inferior direita
}

// Função recursiva para movimentação da Rainha (combinando movimentos da Torre e do Bispo)
void moverRainha(int x, int y, int limite) {
    moverTorre(x, y, limite, 'C');  // Movimento da Torre para Cima
    moverTorre(x, y, limite, 'B');  // Movimento da Torre para Baixo
    moverTorre(x, y, limite, 'E');  // Movimento da Torre para Esquerda
    moverTorre(x, y, limite, 'D');  // Movimento da Torre para Direita

    // Movimento diagonal do Bispo
    moverBispo(x, y, limite, 1, 1);  // Diagonal superior direita
    moverBispo(x, y, limite, -1, 1); // Diagonal inferior direita
    moverBispo(x, y, limite, 1, -1); // Diagonal superior esquerda
    moverBispo(x, y, limite, -1, -1); // Diagonal inferior esquerda
}

// Função para simular o movimento do Cavalo com loops aninhados
void moverCavalo(int x, int y, int limite) {
    int dx[] = {-2, -1, 1, 2};  // Deslocamentos horizontais possíveis
    int dy[] = {-1, -2, -2, -1}; // Deslocamentos verticais possíveis

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int novoX = x + dx[i];
            int novoY = y + dy[j];

            if (novoX >= 0 && novoX < limite && novoY >= 0 && novoY < limite) {
                printf("Movimento Cavalo: X=%d, Y=%d\n", novoX, novoY);
            }
        }
    }
}

int main() {
    int peca;
    int limite = 8;  // Tabuleiro 8x8
    int x = 4, y = 4;  // Posição inicial no centro do tabuleiro

    printf("Bem-vindo ao Jogo de Xadrez!\n\n");
    printf("Escolha a peça que deseja movimentar:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &peca);

    switch (peca) {
        case 1:
            // Movimentação da Torre
            printf("Você escolheu a Torre!\n");
            printf("Movimentos possíveis da Torre:\n");
            moverTorre(x, y, limite, 'C');
            moverTorre(x, y, limite, 'B');
            moverTorre(x, y, limite, 'E');
            moverTorre(x, y, limite, 'D');
            break;

        case 2:
            // Movimentação do Bispo
            printf("Você escolheu o Bispo!\n");
            printf("Movimentos possíveis do Bispo:\n");
            moverBispo(x, y, limite, 1, 1); // Diagonal superior direita
            break;

        case 3:
            // Movimentação da Rainha
            printf("Você escolheu a Rainha!\n");
            printf("Movimentos possíveis da Rainha:\n");
            moverRainha(x, y, limite);
            break;

        case 4:
            // Movimentação do Cavalo
            printf("Você escolheu o Cavalo!\n");
            printf("Movimentos possíveis do Cavalo (movimento em L):\n");
            moverCavalo(x, y, limite);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
