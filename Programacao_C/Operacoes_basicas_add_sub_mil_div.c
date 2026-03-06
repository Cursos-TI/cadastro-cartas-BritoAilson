#include <stdio.h>

/**
 * Projeto: OperacoesBasicas.c
 * Objetivo: Realizar as 4 operacoes fundamentais com tratamento de erro.
 * Padrao: FlowFuse Expert / Industrial Coding
 */

int main() {
    // Definicao de variaveis: float permite casas decimais (essencial para Divisao)
    float valorA, valorB;
    float resSoma, resSub, resMult, resDiv;

    printf("--- Sistema de Calculo de Variaveis ---\n");

    // Fonte: Entrada de Dados (Simulando leitura de Tags de um CLP ou Interface)
    printf("Informe o Valor A: ");
    scanf("%f", &valorA);
    printf("Informe o Valor B: ");
    scanf("%f", &valorB);

    // Processamento / Transformacao
    resSoma = valorA + valorB;
    resSub  = valorA - valorB;
    resMult = valorA * valorB;

    // Exibicao dos resultados (Limitado a 2 casas decimais com %.2f)
    printf("\n--- Relatorio de Saida ---\n");
    printf("1. Soma:           %.2f\n", resSoma);
    printf("2. Subtracao:      %.2f\n", resSub);
    printf("3. Multiplicacao:  %.2f\n", resMult);

    // Seguranca em Primeiro Lugar: Validacao de Divisao
    if (valorB != 0) {
        resDiv = valorA / valorB;
        printf("4. Divisao:        %.2f\n", resDiv);
    } else {
        // Log de erro tecnico
        printf("4. Divisao:        ERRO (Divisor nulo detectado).\n");
    }

    printf("---------------------------------------\n");

    return 0;
}