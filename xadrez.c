#include <stdio.h>

// Torre com recursão
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo com recursão
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Rainha com recursão
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo também com loops aninhados
void moverBispoLoops(int casas) {
    for (int i = 1; i <= casas; i++) {       // movimento vertical
        for (int j = 1; j <= 1; j++) {       // movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

// Cavalo com loops e break/continue
void moverCavalo() {
    int i, j;
    for (i = 1; i <= 2; i++) {   // duas casas para cima
        printf("Cima\n");

        if (i == 2) { // quando terminar as 2 casas pra cima
            for (j = 1; j <= 1; j++) { // uma casa para a direita
                printf("Direita\n");
                break; // garante que só imprime uma vez
            }
            continue;
        }
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // Bispo recursivo
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(5);

    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoops(5);

    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
