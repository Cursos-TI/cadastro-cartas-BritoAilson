#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Sistema Especialista FlowFuse - Módulo: Interface de Menu
 * Fonte: Entrada via Teclado -> Protocolo: Switch/Case -> Destino: Console
 */

int main() {
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // 1. Iniciar Jogo
            printf("Iniciando o jogo...\n");
            
            // Lógica do jogo (Semente de número aleatório)
            srand(time(0));
            numeroSecreto = rand() % 10 + 1;
            
            printf("Adivinhe o número (entre 1 e 10): \n");
            scanf("%d", &palpite);

            if (palpite == numeroSecreto) {
                printf("Parabéns! Você acertou!\n");
            } else {
                printf("Você errou. O número era %d.\n", numeroSecreto);
            }
            break;

        case 2:
            // 2. Ver Regras
            printf("Regras do Jogo:\n");
            printf("1. Escolha uma opção no menu.\n");
            printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
            printf("3. O jogo termina quando você escolhe 'Sair'.\n");
            break;

        case 3:
            // 3. Sair
            printf("Saindo...\n");
            break;

        default:
            // 4. Opção inválida
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}