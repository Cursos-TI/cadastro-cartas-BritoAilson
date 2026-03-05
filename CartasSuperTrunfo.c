#include <stdio.h>

/**
 * Desafio Super Trunfo - Nível Aventureiro
 * Regra: Sem strcspn ou funções avançadas de string.
 * Fonte: Entrada Manual -> Transformação: Cálculos Aritméticos -> Destino: Console
 */

// Função auxiliar para evitar o "pulo" de inputs no buffer
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Variáveis da Carta 1
    char estado1[50], cod_carta1[50], nome_cidade1[50];
    int populacao1, num_pont_turistico1;
    float area_km1, pib1;
    float densidade1, pib_per_capita1;

    // Variáveis da Carta 2
    char estado2[50], cod_carta2[50], nome_cidade2[50];
    int populacao2, num_pont_turistico2;
    float area_km2, pib2;
    float densidade2, pib_per_capita2;

    printf("*** Sistema de Cadastro de Cartas - Super Trunfo ***\n");

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do Estado: ");
    fgets(estado1, 50, stdin);
    
    printf("Digite o Codigo da Carta: ");
    scanf("%49s", cod_carta1);
    limpar_buffer();

    printf("Digite o Nome da Cidade: ");
    fgets(nome_cidade1, 50, stdin);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area em Km: ");
    scanf("%f", &area_km1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &num_pont_turistico1);
    limpar_buffer();

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do Estado: ");
    fgets(estado2, 50, stdin);

    printf("Digite o Codigo da Carta: ");
    scanf("%49s", cod_carta2);
    limpar_buffer();

    printf("Digite o Nome da Cidade: ");
    fgets(nome_cidade2, 50, stdin);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area em Km: ");
    scanf("%f", &area_km2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &num_pont_turistico2);
    limpar_buffer();

    // --- TRANSFORMAÇÃO (Cálculos de Performance) ---
    // Densidade: Populacao / Area
    densidade1 = (float)populacao1 / area_km1;
    densidade2 = (float)populacao2 / area_km2;

    // PIB per Capita: (PIB * 1 bilhão) / Populacao
    pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // --- EXIBIÇÃO FORMATADA (Destino) ---
    printf("\n========================================");
    printf("\nEXIBIÇÃO DAS CARTAS");
    
    // Na exibição, o próprio \n que o fgets capturou ajudará a pular a linha
    printf("\n\nCarta 1: %sCodigo: %s", nome_cidade1, cod_carta1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita1);

    printf("\n\nCarta 2: %sCodigo: %s", nome_cidade2, cod_carta2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita2);
    printf("\n========================================\n");

    return 0;
}
