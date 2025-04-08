#include <stdio.h>

int main() { // Torre move 5 casas para a direita
    for (int t = 0; t < 5; t++){
       printf("Torre moveu para Direita!\n"); // impressão do movimento
    }
     printf("\n");
  
    int r = 0;         // Rainha move 8 casas para esquerda
    while (r < 8){
        printf("Rainha moveu para Esquerda.\n");
        r++;
    }

    printf("\n");
 
    int b = 0;
       // Bispo move 5 casas na diagonal para cima e a direita
    do {
        printf("Bispo moveu para cima, direita\n");
        b++;
    }   while (b < 5);

    return 0;
}
