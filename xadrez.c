#include <stdio.h>

//
// Desafio: Movimentos Complexos (Nível Mestre)
// Este programa aprimora os desafios anteriores, substituindo loops
// por recursividade para Torre, Bispo e Rainha, e usando loops complexos
// e aninhados para o Cavalo.
//

// --- Funções Recursivas para as Peças ---

// Função recursiva para a Torre
void moverTorre(int passos) {
    //
    // Lógica da Recursividade para a Torre:
    // A função chama a si mesma até que 'passos' chegue a zero.
    // A cada chamada, ela imprime a direção e decrementa o contador.
    //
    if (passos > 0) {
        printf("Direita\n");
        moverTorre(passos - 1); // Chamada recursiva
    }
}

// Função recursiva para o Bispo
void moverBispo(int passos) {
    //
    // Lógica da Recursividade para o Bispo:
    // Assim como a Torre, a função se chama recursivamente para cada passo.
    // Ela simula o movimento na diagonal imprimindo a combinação de direções.
    //
    if (passos > 0) {
        printf("Cima, Direita\n");
        moverBispo(passos - 1); // Chamada recursiva
    }
}

// Função recursiva para a Rainha
void moverRainha(int passos) {
    //
    // Lógica da Recursividade para a Rainha:
    // Segue o mesmo padrão recursivo, decrementando o contador a cada passo
    // e imprimindo a direção correta.
    //
    if (passos > 0) {
        printf("Esquerda\n");
        moverRainha(passos - 1); // Chamada recursiva
    }
}

int main() {
    //
    // Lógica do Programa Principal:
    // Chama as funções recursivas para as peças e implementa a lógica
    // dos loops aninhados para o Cavalo, conforme os requisitos do desafio.
    //

    // --- Simulação do Movimento da Torre (Recursividade) ---
    printf("--- Movimento da Torre (5 casas para a direita - Recursividade) ---\n");
    int casas_torre = 5;
    moverTorre(casas_torre);
    printf("\n");

    // --- Simulação do Movimento do Bispo (Loops Aninhados e Recursividade) ---
    // Requisito: O Bispo deve ser implementado com recursividade e também
    // com loops aninhados, sendo o mais externo o vertical e o mais interno o horizontal.
    printf("--- Movimento do Bispo (5 casas para cima e direita - Loops Aninhados) ---\n");
    int casas_bispo = 5;
    for (int i = 0; i < casas_bispo; i++) {
        // Loop externo (vertical): Simula o movimento vertical
        for (int j = 0; j < 1; j++) {
            // Loop interno (horizontal): Simula o movimento horizontal
            // A combinação de ambos representa a diagonal
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // --- Simulação do Movimento da Rainha (Recursividade) ---
    printf("--- Movimento da Rainha (8 casas para a esquerda - Recursividade) ---\n");
    int casas_rainha = 8;
    moverRainha(casas_rainha);
    printf("\n");

    // --- Simulação do Movimento do Cavalo (Loops Complexos Aninhados) ---
    // Requisito: Mover 2 casas para cima e 1 para a direita em "L".
    // Utilizando loops aninhados com múltiplas variáveis e/ou condições.
    printf("--- Movimento do Cavalo (em 'L': 2 para cima, 1 para a direita) ---\n");

    // Este loop aninhado simula o movimento em "L".
    // O loop externo gerencia a parte vertical (2 casas).
    // O loop interno (ativado por uma condição) gerencia a parte horizontal (1 casa).
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        if (i == 1) { // Após o segundo movimento vertical, adicione o movimento horizontal.
            // Loop interno para o movimento horizontal
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}
