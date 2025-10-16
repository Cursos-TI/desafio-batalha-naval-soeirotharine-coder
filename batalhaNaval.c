#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Tabuleiro 10x10 inicializado com zeros (0 = vazio)
    
    int tabuleiro[10][10] = {0};

    // Posicionamento manual dos navios
    // Navio 1 - Vertical (coluna 2, linhas 1 a 3)
    int navio1_linha_inicial = 1;
    int navio1_coluna = 2;
    int tamanho_navio1 = 3;

    // Navio 2 - Horizontal (linha 6, colunas 4 a 6)
    int navio2_linha = 6;
    int navio2_coluna_inicial = 4;
    int tamanho_navio2 = 3;

   // Marca o navio vertical no tabuleiro com o valor 3
    for (int i = 0; i < tamanho_navio1; i++) {
        tabuleiro[navio1_linha_inicial + i][navio1_coluna] = 3;
    }

    // Marca o navio horizontal no tabuleiro com o valor 3
    for (int j = 0; j < tamanho_navio2; j++) {
        tabuleiro[navio2_linha][navio2_coluna_inicial + j] = 3;
    }
      // Exibe as coordenadas dos navios
    printf("\n==============================\n");
    printf("🏅 NÍVEL NOVATO\n");
    printf("==============================\n");
    printf("=== COORDENADAS DOS NAVIOS ===\n");
    
    printf("\nNavio 1 (Vertical):\n");
    for (int i = 0; i < tamanho_navio1; i++) {
        printf("Linha: %d, Coluna: %d\n", navio1_linha_inicial + i, navio1_coluna);
    }

    printf("\nNavio 2 (Horizontal):\n");
    for (int j = 0; j < tamanho_navio2; j++) {
        printf("Linha: %d, Coluna: %d\n", navio2_linha, navio2_coluna_inicial + j);
    }

 // Exibe o tabuleiro completo
    printf("\n=== TABULEIRO 10x10 ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiroAventureiro[10][10] = {0};

    // --- Navio 1: horizontal ---
    for (int i = 0; i < 3; i++) {
        tabuleiroAventureiro[1][i + 2] = 3;
    }

    // --- Navio 2: vertical ---
    for (int i = 0; i < 3; i++) {
        tabuleiroAventureiro[i + 4][7] = 3;
    }



    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0


