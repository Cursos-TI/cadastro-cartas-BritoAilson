#include <stdio.h>

/**
 * Projeto: Super Trunfo Países - Nível Intermediário
 * Aluno: Ailson Brito
 * Foco: Exibição detalhada de valores e resultados.
 */

int main() {
    char pais1[50], pais2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int pontos1, pontos2, opcao;

    printf("*** Cadastro de Cartas - Super Trunfo ***\n");

    // --- ENTRADA DE DADOS ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Nome do País: "); scanf(" %[^\n]", pais1);
    printf("População: "); scanf("%lu", &pop1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Nome do País: "); scanf(" %[^\n]", pais2);
    printf("População: "); scanf("%lu", &pop2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);

    // --- CÁLCULOS ---
    densidade1 = (float)pop1 / area1;
    densidade2 = (float)pop2 / area2;

    // --- MENU INTERATIVO ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População | 2. Área | 3. PIB | 4. Pontos Turísticos | 5. Densidade\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n========================================\n");
    printf("        RESULTADO DA COMPARAÇÃO         \n");
    printf("========================================\n");

    switch (opcao) {
        case 1:
            printf("Atributo Escolhido: População\n");
            printf("%s: %lu habitantes\n", pais1, pop1);
            printf("%s: %lu habitantes\n", pais2, pop2);
            if (pop1 > pop2) printf("\nVENCEDOR: %s!\n", pais1);
            else if (pop2 > pop1) printf("\nVENCEDOR: %s!\n", pais2);
            else printf("\nRESULTADO: Empate!\n");
            break;

        case 2:
            printf("Atributo Escolhido: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) printf("\nVENCEDOR: %s!\n", pais1);
            else if (area2 > area1) printf("\nVENCEDOR: %s!\n", pais2);
            else printf("\nRESULTADO: Empate!\n");
            break;

        case 3:
            printf("Atributo Escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n", pais2, pib2);
            if (pib1 > pib2) printf("\nVENCEDOR: %s!\n", pais1);
            else if (pib2 > pib1) printf("\nVENCEDOR: %s!\n", pais2);
            else printf("\nRESULTADO: Empate!\n");
            break;

        case 4:
            printf("Atributo Escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", pais1, pontos1);
            printf("%s: %d pontos\n", pais2, pontos2);
            if (pontos1 > pontos2) printf("\nVENCEDOR: %s!\n", pais1);
            else if (pontos2 > pontos1) printf("\nVENCEDOR: %s!\n", pais2);
            else printf("\nRESULTADO: Empate!\n");
            break;

        case 5:
            printf("Atributo Escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            // Regra especial: Menor valor vence
            if (densidade1 < densidade2) printf("\nVENCEDOR: %s!\n", pais1);
            else if (densidade2 < densidade1) printf("\nVENCEDOR: %s!\n", pais2);
            else printf("\nRESULTADO: Empate!\n");
            break;

        default:
            printf("ERRO: Opção inválida selecionada.\n");
            break;
    }

    printf("========================================\n");

    return 0;
}