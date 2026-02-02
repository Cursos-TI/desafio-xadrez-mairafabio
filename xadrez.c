#include <stdio.h>

int main() {
    // -------------------------------
    // Torre: movimento horizontal (Direita)
    // Estrutura usada: FOR
    // -------------------------------
    int casasTorre = 5; 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Bispo: movimento diagonal (Cima + Direita)
    // Estrutura usada: WHILE
    // -------------------------------
    int casasBispo = 5; 
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
    int casasRainha = 8; 
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // -------------------------------
    // Cavalo: movimento em "L"
    // 2 casas para baixo + 1 casa para a esquerda
    // Estruturas usadas: FOR + WHILE (loops aninhados)
    // -------------------------------
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo: FOR para as casas para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        // Loop interno: WHILE para a casa à esquerda
        int j = 1;
        while (j <= casasEsquerda && i == casasBaixo) {
            // Só imprime "Esquerda" após terminar os movimentos para baixo
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}