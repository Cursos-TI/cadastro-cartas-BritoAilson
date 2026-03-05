#include <stdio.h>

/**
 * Desafio Super Trunfo - Nível Aventureiro
 * Versão simplificada: Limpeza de buffer feita diretamente no fluxo.
 */

int main() {
    char estado1[50], cod_carta1[50], nome_cidade1[50];
    int populacao1, num_pont_turistico1;
    float area_km1, pib1;
    float densidade1, pib_per_capita1;

    char estado2[50], cod_carta2[50], nome_cidade2[50];
    int populacao2, num_pont_turistico2;
    float area_km2, pib2;
    float densidade2, pib_per_capita2;

    printf("*** Sistema Super Trunfo ***\n");

    // --- CARTA 1 ---
    printf("\nNome do Estado: ");
    fgets(estado1, 50, stdin);
    
    printf("Código da Carta: ");
    scanf("%49s", cod_carta1);
    
    // Substituindo a função: Este getchar() "come" o Enter que o scanf deixou.
    getchar(); 

    printf("Nome da Cidade: ");
    /* Usamos fgets para aceitar espaços. Ele lê até o Enter. */
    fgets(nome_cidade1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em Km: ");
    scanf("%f", &area_km1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &num_pont_turistico1);
    
    // Outra forma de limpar sem função:
    getchar(); 

    // --- CARTA 2 ---
    printf("\nNome do Estado: ");
    fgets(estado2, 50, stdin);

    printf("Código da Carta: ");
    scanf("%49s", cod_carta2);
    getchar(); 

    printf("Nome da Cidade: ");
    fgets(nome_cidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em Km: ");
    scanf("%f", &area_km2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &num_pont_turistico2);
    getchar();

    // --- CÁLCULOS ---
    densidade1 = (float)populacao1 / area_km1;
    pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;

    densidade2 = (float)populacao2 / area_km2;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // --- SAÍDA ---
    printf("\nCarta 1: %sCódigo: %s", nome_cidade1, cod_carta1);
    printf("\nDensidade: %.2f hab/km² | PIB per Capita: %.2f reais", densidade1, pib_per_capita1);

    printf("\n\nCarta 2: %sCódigo: %s", nome_cidade2, cod_carta2);
    printf("\nDensidade: %.2f hab/km² | PIB per Capita: %.2f reais", densidade2, pib_per_capita2);

    return 0;
}