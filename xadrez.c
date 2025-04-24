#include <stdio.h>

// Movimentar a Torre para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Torre moveu para Direita!\n");
    moverTorre(passos - 1);
}

//Movimentar a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha moveu para Esquerda.\n");
    moverRainha(passos - 1);
}

//Movimentar o Bispo diagonal (cima e direita) com loops aninhados
void moverBispo(int vertical) {
    if (vertical == 0) return;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Bispo moveu para cima, direita\n");
        }
    }

    moverBispo(vertical - 1);
}

// Movimentar o Cavalo em "L"
void moverCavalo() {
    int i = 0, j = 0;

    while (1) {
        if (i < 2) {
            printf("Cavalo moveu para cima.\n");
            i++;
            continue;
        }
        if (j < 1) {
            printf("Cavalo moveu para direita.\n");
            j++;
            break;
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5); // 5 casas para a direita

    printf("\nMovimento da Rainha:\n");
    moverRainha(8); // 8 casas para a esquerda

    printf("\nMovimento do Bispo:\n");
    moverBispo(5); // 5 casas em diagonal

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(); // movimento em "L"

    return 0;
}