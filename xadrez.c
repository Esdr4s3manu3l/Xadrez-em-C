#include <stdio.h>

// =============================================
// FUNÇÃO RECURSIVA - TORRE
// Move para a direita
// =============================================
void moverTorre(int casas) {
    if (casas <= 0) return;   // Caso base

    printf("Direita\n");
    moverTorre(casas - 1);    // Chamada recursiva
}

// =============================================
// FUNÇÃO RECURSIVA - RAINHA
// Move para a esquerda
// =============================================
void moverRainha(int casas) {
    if (casas <= 0) return;   // Caso base

    printf("Esquerda\n");
    moverRainha(casas - 1);   // Chamada recursiva
}

// =============================================
// FUNÇÃO RECURSIVA + LOOPS ANINHADOS - BISPO
// Movimento diagonal (Cima + Direita)
// Loop externo = vertical
// Loop interno = horizontal
// =============================================
void moverBispo(int casas) {
    if (casas <= 0) return;   // Caso base da recursão

    // Loop externo (vertical)
    for (int vertical = 1; vertical <= 1; vertical++) {

        // Loop interno (horizontal)
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);    // Chamada recursiva
}

// =============================================
// CAVALO - LOOPS COMPLEXOS
// Movimento em L:
// 2 casas para CIMA
// 1 casa para DIREITA
// Usa loops aninhados + break + continue
// =============================================
void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 1; i <= movimentosVerticais; i++) {

        if (i == 2) {
            // Apenas demonstração de controle de fluxo
            printf("Cima\n");
            continue;
        }

        printf("Cima\n");
    }

    int j = 1;

    while (j <= movimentosHorizontais) {

        if (j > movimentosHorizontais)
            break;

        printf("Direita\n");
        j++;
    }
}

// =============================================
// FUNÇÃO PRINCIPAL
// =============================================
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}