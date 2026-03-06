#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1[50], cod1[10], cidade1[50];
    unsigned long int pop1;
    float area1, pib1, densidade1, capita1, poder1;
    int pontos1;

    // Variáveis Carta 2
    char estado2[50], cod2[10], cidade2[50];
    unsigned long int pop2;
    float area2, pib2, densidade2, capita2, poder2;
    int pontos2;

    printf("*** Sistema Super Trunfo - Nível Mestre ***\n");

    // --- ENTRADA CARTA 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1); // Lê tudo incluindo espaços até o Enter
    printf("Código: ");
    scanf(" %s", cod1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População (apenas números): ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // --- ENTRADA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %s", cod2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População (apenas números): ");
    scanf("%lu", &pop2); // IMPORTANTE: Não use ponto ou vírgula aqui!
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --- CÁLCULOS ---
    densidade1 = (float)pop1 / area1;
    capita1 = (pib1 * 1000000000.0) / (float)pop1;
    poder1 = (float)pop1 + area1 + pib1 + (float)pontos1 + capita1 + (1.0 / densidade1);

    densidade2 = (float)pop2 / area2;
    capita2 = (pib2 * 1000000000.0) / (float)pop2;
    poder2 = (float)pop2 + area2 + pib2 + (float)pontos2 + capita2 + (1.0 / densidade2);

    // --- COMPARAÇÕES ---
    printf("\n========================================");
    printf("\n       RESULTADO DAS COMPARAÇÕES        ");
    printf("\n========================================\n");

    printf("População: Carta %d venceu!\n", (pop1 > pop2) ? 1 : 2);
    printf("Área: Carta %d venceu!\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu!\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu!\n", (pontos1 > pontos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu!\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu!\n", (capita1 > capita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu!\n", (poder1 > poder2) ? 1 : 2);
    
    printf("========================================\n");

    return 0;
}