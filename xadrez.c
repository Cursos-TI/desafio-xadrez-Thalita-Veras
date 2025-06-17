#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

void conversaoDirecao (int escolha) {
    if(escolha == 1) {
        printf("Cima\n");
    } else if (escolha == 2) {
        printf("Baixo\n");
    } else if (escolha == 3) {
        printf("Direita\n");
    }  else if (escolha == 4) {
        printf("Esquerda\n");
    }
}

void movimentoLoop(int escolha, int n) {
    if(n > 0) {
        conversaoDirecao(escolha);
        movimentoLoop(escolha, n - 1);
    }
}

void movimentoBispo(int escolha1, int escolha2, int casas) {
    if(casas == 0) return;

    for (int i = 0; i < 1; i++) {
        if (escolha1 == 1) printf("Cima\n");
        else if (escolha1 == 2) printf("Baixo\n");
    

        for(int j = 0; j < 1; j++) {
            if (escolha2 == 1) printf("Direita\n");
            else if (escolha2 == 2) printf("Esquerda\n");
        }
    }

    movimentoBispo(escolha1, escolha2, casas - 1);
}

void movimentoCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        if(i == 1) break; // Para após duas casas
    }

    for (int j = 0; j < 2; j++) {
        if(j == 0) {
            printf("Direita\n");
            continue;
        }
    }
}

void tempo() {
    for (int i = 0; i < 5; i++) {
        printf(".\n");
        for (int j = 0; j < 10; j++) {
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcao, escolha;

    do {
        printf("Movimentacao pecas de Xadrez\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        printf("\n");

        tempo();

        printf("\n");
        int escolha2;
        switch(opcao) {
            case 1:
                do {
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    printf("3. Voltar\n");
                    printf("Escolha a direcao vertical: ");
                    scanf("%d", &escolha);
                    
                    if(escolha == 3) break;

                    printf("1. Direita\n");
                    printf("2. Esquerda\n");
                    printf("3. Voltar\n");
                    printf("Escolha a direcao horizontal: ");
                    scanf("%d", &escolha2);

                    switch (escolha) {
                        case 1:
                            movimentoBispo(escolha, escolha2, 5);
                            break;
                        case 2:
                            printf("Diagonal\n");
                            movimentoBispo(escolha, escolha2, 5);
                            break;
                        default:
                            printf("Voltando...\n");
                            tempo();
                            break;
                    }
                } while (escolha != 3);   
                break;
            case 2:
                // Implementação de Movimentação da Torre
                // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
                do {
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    printf("3. Direita\n");
                    printf("4. Esquerda\n");
                    printf("5. Voltar\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &escolha);
                
                    switch (escolha) {
                        case 1:
                            movimentoLoop(escolha, 5);
                            break;
                        case 2:
                            movimentoLoop(escolha, 5);
                            break;
                        case 3:
                            movimentoLoop(escolha, 5);
                            break;
                        case 4:
                            movimentoLoop(escolha, 5);
                            break;
                        default:
                            printf("Voltando...\n");
                            tempo();
                            break;
                    }
                } while (escolha != 5); 
                
                break;
            case 3:
                // Implementação de Movimentação da Rainha
                // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
                do {
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    printf("3. Direita\n");
                    printf("4. Esquerda\n");
                    printf("5. Voltar\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &escolha);

                    switch (escolha) {
                        case 1:
                            movimentoLoop(escolha, 8);
                            break;
                        case 2:
                            movimentoLoop(escolha, 8);
                            break;
                        case 3:
                            movimentoLoop(escolha, 8);
                            break;
                        case 4:
                            movimentoLoop(escolha, 8);
                            break;
                        default:
                            printf("Voltando...\n");
                            tempo();
                            break;
                    }
                } while (escolha != 5); 
                
                break;
            case 4:
                // Nível Aventureiro - Movimentação do Cavalo
                movimentoCavalo();
                printf("Movimento do Cavalo realizado.\n");
                break;
            default:
                printf("Saindo...\n");
                printf("Obrigado por jogar!\n");
                break;
        }
    } while (opcao != 5);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}