#include <stdio.h>

int main() {

    // =========================================
    // DEFINIÇÃO DO NÚMERO DE CASAS
    // =========================================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;

    // =========================================
    // TORRE - usando FOR
    // =========================================
    printf("Movimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // =========================================
    // BISPO - usando WHILE
    // =========================================
    printf("Movimento do Bispo:\n");

    i = 1;
    while(i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // =========================================
    // RAINHA - usando DO-WHILE
    // =========================================
    printf("Movimento da Rainha:\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casasRainha);

    printf("\n");

    // =========================================
    // CAVALO - usando LOOPS ANINHADOS
    // Movimento em "L":
    // 2 casas para BAIXO
    // 1 casa para ESQUERDA
    // =========================================
    printf("Movimento do Cavalo:\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop externo (obrigatório: FOR)
    for(i = 1; i <= 1; i++) {

        int contadorBaixo = 1;

        // Loop interno (WHILE)
        while(contadorBaixo <= casasBaixo) {
            printf("Baixo\n");
            contadorBaixo++;
        }

        int contadorEsquerda = 1;

        while(contadorEsquerda <= casasEsquerda) {
            printf("Esquerda\n");
            contadorEsquerda++;
        }
    }

    return 0;
}