#include <stdio.h>

/**
 * Projeto: Super Trunfo Países - Nível Intermediário
 * Aluno: Ailson Brito | Instituição: Estácio de Sá
 * Objetivo: Cadastro dinâmico e comparação via Switch/Case
 */

int main() {
    // --- Declaração de Variáveis ---
    char pais1[50], pais2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int pontos1, pontos2, opcao;

    printf("*** Cadastro de Cartas - Super Trunfo ***\n");

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", pais1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", pais2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --- CÁLCULOS (TRANSFORMAÇÃO) ---
    densidade1 = (float)pop1 / area1;
    densidade2 = (float)pop2 / area2;

    // --- MENU INTERATIVO ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n========================================\n");

    // --- LÓGICA DE COMPARAÇÃO (SWITCH) ---
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu | %s: %lu\n", pais1, pop1, pais2, pop2);
            if (pop1 > pop2) printf("Vencedor: %s\n", pais1);
            else if (pop2 > pop1) printf("Vencedor: %s\n", pais2);
            else printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", pais1, area1, pais2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", pais1);
            else if (area2 > area1) printf("Vencedor: %s\n", pais2);
            else printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bi | %s: %.2f bi\n", pais1, pib1, pais2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", pais2);
            else printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", pais1, pontos1, pais2, pontos2);
            if (pontos1 > pontos2) printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1) printf("Vencedor: %s\n", pais2);
            else printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", pais1, densidade1, pais2, densidade2);
            // Regra Invertida: Menor vence
            if (densidade1 < densidade2) printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", pais2);
            else printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção Inválida!\n");
            break;
    }

    printf("========================================\n");

    return 0;
}