#include <stdio.h>

/**
 * Programa: GestaoEstoqueIndustrial.c
 * Objetivo: Calcular valor total de ativos, monitorar níveis críticos e comparar inventários.
 * Padrao: FlowFuse Expert / Production Ready.
 */

int main() {
    // 1. FONTE: Definição de Ativos e Parâmetros de Inventário
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = 0.0;
    double valorTotalB = 0.0;

    // 2. TRANSFORMAÇÃO: Processamento de Cálculos e Lógica de Comparação
    valorTotalA = (double)estoqueA * valorA;
    valorTotalB = (double)estoqueB * valorB;

    // 3. DESTINO: Relatório de Estoque e Análise Comparativa
    printf("--- Relatorio de Estoque ---\n");

    // Detalhes Produto A
    printf("Produto: %s | Estoque: %u | Valor Total: R$%.2f", produtoA, estoqueA, valorTotalA);
    if (estoqueA < estoqueMinimoA) printf(" [ALERTA: ABAIXO DO MINIMO]");
    printf("\n");

    // Detalhes Produto B
    printf("Produto: %s | Estoque: %u | Valor Total: R$%.2f", produtoB, estoqueB, valorTotalB);
    if (estoqueB < estoqueMinimoB) printf(" [ALERTA: ABAIXO DO MINIMO]");
    printf("\n\n");

    // --- BLOCO DE COMPARAÇÃO DE ATIVOS ---
    printf("--- Analise de Comparacao Industrial ---\n");

    // Comparação de Volume (Quantidade)
    if (estoqueA > estoqueB) {
        printf("> Maior volume em unidades: %s (%u unidades)\n", produtoA, estoqueA);
    } else if (estoqueB > estoqueA) {
        printf("> Maior volume em unidades: %s (%u unidades)\n", produtoB, estoqueB);
    } else {
        printf("> Os produtos possuem volumes de estoque identicos.\n");
    }

    // Comparação Financeira (Capital Imobilizado)
    if (valorTotalA > valorTotalB) {
        printf("> Maior capital imobilizado: %s (R$%.2f)\n", produtoA, valorTotalA);
    } else if (valorTotalB > valorTotalA) {
        printf("> Maior capital imobilizado: %s (R$%.2f)\n", produtoB, valorTotalB);
    } else {
        printf("> O impacto financeiro de ambos os produtos e equivalente.\n");
    }

    // Comparação de Criticidade (Saúde do Estoque)
    if ((estoqueB < estoqueMinimoB) && (estoqueA < estoqueMinimoA)) {
        printf("> Status Critico: AMBOS os produtos estao abaixo do limite de seguranca!\n");
    } else if (estoqueB < estoqueMinimoB) {
        printf("> Prioridade de Reposicao: %s\n", produtoB);
    } else if (estoqueA < estoqueMinimoA) {
        printf("> Prioridade de Reposicao: %s\n", produtoA);
    } else {
        printf("> Status de Operacao: Todos os niveis estao dentro dos setpoints de seguranca.\n");
    }

    printf("---------------------------------------\n");

    return 0;
}