#include <stdio.h>

int main() {
    // -------------------------------
    // Torre: movimento horizontal (Direita)
    // Estrutura usada: FOR
    // -------------------------------
    int casasTorre = 5; // número de casas que a Torre vai se mover
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Bispo: movimento diagonal (Cima + Direita)
    // Estrutura usada: WHILE
    // -------------------------------
    int casasBispo = 5; // número de casas que o Bispo vai se mover
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Rainha: movimento horizontal (Esquerda)
    // Estrutura usada: DO-WHILE
    // -------------------------------
    int casasRainha = 8; // número de casas que a Rainha vai se mover
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}