#include <stdio.h>   // Biblioteca para entrada e saída (printf e scanf)
#include <stdlib.h>  // Biblioteca para funções gerais, como gerar números aleatórios
#include <time.h>    // Biblioteca para lidar com o tempo do sistema

int main() {
    // 1. Criamos as "caixinhas" (variáveis) para guardar as escolhas
    int escolhaJogador, escolhaComputador;

    // 2. O "srand" prepara o computador para gerar números realmente aleatórios
    // Usamos o tempo atual (time(0)) como semente para o número nunca ser igual
    srand(time(0));

    // 3. Mostramos o menu para o usuário
    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");

    // 4. O programa para e espera o jogador digitar um número
    scanf("%d", &escolhaJogador);

    // 5. O computador faz a escolha dele sozinho
    // rand() % 3 gera 0, 1 ou 2. Somamos +1 para ficar entre 1 e 3
    escolhaComputador = rand() % 3 + 1;

    // 6. Mostramos o que o computador escolheu para compararmos
    printf("\nComputador escolheu: %d\n", escolhaComputador);

    // --- Lógica de Decisão (Quem ganha de quem?) ---
    
    // Se os dois números forem iguais, não tem vencedor
    if (escolhaJogador == escolhaComputador) {
        printf("Resultado: Empate!\n");
    } 
    // Aqui usamos o "E" (&&) e o "OU" (||) para as 3 regras de vitória:
    // (Pedra ganha de Tesoura) OU (Papel ganha de Pedra) OU (Tesoura ganha de Papel)
    else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
             (escolhaJogador == 2 && escolhaComputador == 1) || 
             (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Resultado: Você venceu!\n");
    } 
    // Se não empatou e você não ganhou, sobrou apenas a vitória do computador
    else {
        printf("Resultado: O computador venceu!\n");
    }

    return 0; // Finaliza o programa corretamente
}