#include <stdio.h>

/**
 * Instituição: Estácio de Sá
 * Professor: Sergio Cardoso
 * Aluno: Ailson Brito
 * Projeto: Super Trunfo Países - Validação de Requisitos com Exemplos
 * Objetivo: Facilitar o cadastro via console mantendo os rótulos obrigatórios.
 */

int main() {
    // --- Declaração de Variáveis ---
    char estado1[50], cod1[10], cidade1[50];
    unsigned long int pop1;
    float area1, pib1, densidade1, capita1;
    int pontos1;

    char estado2[50], cod2[10], cidade2[50];
    unsigned long int pop2;
    float area2, pib2, densidade2, capita2;
    int pontos2;

    printf("*** Sistema Super Trunfo - Cadastro de Cartas ***\n");

    // --- ENTRADA CARTA 1 ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado (Ex: SP): "); 
    scanf(" %s", estado1);
    printf("Código da carta (Ex: A01): "); 
    scanf(" %s", cod1);
    printf("Nome da cidade: "); 
    scanf(" %[^\n]", cidade1);
    printf("População: "); 
    scanf("%lu", &pop1);
    printf("Área (em km²): "); 
    scanf("%f", &area1);
    printf("PIB (em bilhões): "); 
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: "); 
    scanf("%d", &pontos1);

    // --- ENTRADA CARTA 2 ---
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado (Ex: SP): ");
    scanf(" %s", estado2);
    printf("Código da carta (Ex: A02): "); 
    scanf(" %s", cod2);
    printf("Nome da cidade: "); 
    scanf(" %[^\n]", cidade2);
    printf("População: "); 
    scanf("%lu", &pop2);
    printf("Área (em km²): "); 
    scanf("%f", &area2);
    printf("PIB (em bilhões): "); 
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: "); 
    scanf("%d", &pontos2);

    // --- BLOCO DE CÁLCULOS (TRANSFORMAÇÃO) ---
    // Cálculo de Densidade e PIB per Capita conforme regras do curso
    densidade1 = (float)pop1 / area1;
    capita1 = (pib1 * 1000000000.0) / (float)pop1;

    densidade2 = (float)pop2 / area2;
    capita2 = (pib2 * 1000000000.0) / (float)pop2;

    // --- DESTINO: Comparação e Exibição de Resultado ---
    // Atributo para Comparação: Densidade Populacional (Menor valor vence)
    printf("\n========================================");
    printf("\nComparação de cartas (Atributo: Densidade Populacional)");
    printf("\n========================================\n");
    
    printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);

    // Lógica if-else baseada no material de aula
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    printf("========================================\n");

    return 0;
}