#include <stdio.h>
#include <windows.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i;
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

        for (int i = 0; i < 5; i++) {
            printf(".\n");
            Sleep(1);
        }

        printf("\n");

        switch(opcao) {
            case 1:
                do {
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    printf("3. Direita\n");
                    printf("4. Esquerda\n");
                    printf("5. Voltar\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &escolha);

                    i = 1;

                    switch (escolha) {
                    case 1:
                        printf("Cima.\n");
                        while (i <= 5) {
                            printf("Diagonal\n");
                            i++;
                        }
                        break;
                    case 2:
                        printf("Baixo.\n");
                        while (i <= 5) {
                            printf("Diagonal\n");
                            i++;
                        }
                        break;
                    case 3:
                        printf("Direita.\n");
                        while (i <= 5) {
                            printf("Diagonal\n");
                            i++;
                        }
                        break;
                    case 4:
                        printf("Esquerda.\n");
                        while (i <= 5) {
                            printf("Diagonal\n");
                            i++;
                        }
                        break;
                    default:
                        printf("Voltando...\n");
                        for (int i = 0; i < 5; i++) {
                            printf(".\n");
                            Sleep(1);
                            }
                        break;
                    }
                } while (escolha != 5);   
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
                            for (int j = 1; j <= 5; j++) {
                                printf("Cima\n");
                            }
                            break;
                        case 2:
                            for (int j = 1; j <= 5; j++) {
                                printf("Baixo\n");
                            }
                            break;
                        case 3:
                            for (int j = 1; j <= 5; j++) {
                                printf("Direita\n");
                            }
                            break;
                        case 4:
                            for (int j = 1; j <= 5; j++) {
                                printf("Esquerda\n");
                            }
                            break;
                        default:
                            printf("Voltando...\n");
                            for (int i = 0; i < 5; i++) {
                                printf(".\n");
                                Sleep(1);
                            }
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
                    
                    int k = 1;

                    switch (escolha) {
                        case 1:
                            do {
                                printf("Cima\n");
                                k++;
                            } while (k <= 8);
                            break;
                        case 2:
                            do {
                                printf("Baixo\n");
                                k++;
                            } while (k <= 8);
                            break;
                        case 3:
                            do {
                                printf("Direita\n");
                                k++;
                            } while (k <= 8);
                            break;
                        case 4:
                            do {
                                printf("Esquerda\n");
                                k++;
                            } while (k <= 8);
                            break;
                        default:
                            printf("Voltando...\n");
                            break;
                    }
                } while (escolha != 5); 
                
                break;
            case 4:
                // Nível Aventureiro - Movimentação do Cavalo
                do {
                    printf("1. Direita\n");
                    printf("2. Esquerda\n");
                    printf("3. Voltar\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &escolha);

                    int movimentoCompleto = 1;

                    switch (escolha) {
                        case 1:
                            while (movimentoCompleto--) {
                                for (int i = 0; i < 2; i++) {
                                    printf("Cima\n");
                                }
                                printf("Direita\n");
                            }
                            break;
                        case 2:
                            while (movimentoCompleto--) {
                                for (int i = 0; i < 2; i++) {
                                    printf("Cima\n");
                                }
                                printf("Esquerda\n");
                            }
                            break;
                        default:
                            printf("Voltando...\n");
                            break;
                    }
                } while (escolha != 3); 
                

               
                break;
            default:
                printf("Saindo...");
                for (int i = 0; i < 5; i++) {
                    printf(".\n");
                    Sleep(1);
                }
                break;
        }
    } while (opcao != 5);
    

    
    
    
    
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
