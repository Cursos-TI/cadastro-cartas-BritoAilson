#include <stdio.h>

/**
 * Desafio Super Trunfo - Nível Aventureiro
 * Olá! Este script foi desenvolvido para cadastrar e calcular dados de cidades.
 * Mantivemos a lógica simples (sem funções complexas) para facilitar a leitura.
 */

// Esta função limpa o "rastro" que o teclado deixa no sistema (o buffer)
// Evita que o programa pule perguntas ou leia dados errados.
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Definindo as gavetas (variáveis) para guardar as informações da Carta 1
    char estado1[50], cod_carta1[50], nome_cidade1[50];
    int populacao1, num_pont_turistico1;
    float area_km1, pib1;
    float densidade1, pib_per_capita1;

    // Gavetas para a Carta 2
    char estado2[50], cod_carta2[50], nome_cidade2[50];
    int populacao2, num_pont_turistico2;
    float area_km2, pib2;
    float densidade2, pib_per_capita2;

    printf("*** Bem-vindo ao Sistema Super Trunfo! ***\n");

    // --- COLETANDO DADOS DA CARTA 1 ---
    printf("\n--- Vamos cadastrar a primeira cidade ---\n");
    printf("Qual o nome do Estado? ");
    
    /* Por que usamos fgets aqui? 
       Diferente do scanf, o fgets não se "assusta" com espaços "lê o espaço como ENTER". 
       Se o usuário digitar "Rio de Janeiro", ele pega o nome completo. 
       O scanf pararia logo no "Rio", o que quebraria nosso jogo. */
    fgets(estado1, 50, stdin);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%49s", cod_carta1);
    limpar_buffer(); // Limpa o buffer para o próximo nome não vir com erro

    printf("Qual o nome da cidade? ");
    // Usamos fgets de novo para garantir que cidades com nome composto sejam lidas corretamente.
    fgets(nome_cidade1, 50, stdin);

    printf("Qual a população? ");
    scanf("%d", &populacao1);
    printf("Qual a área em Km? ");
    scanf("%f", &area_km1);
    printf("Qual o PIB (em bilhões)? ");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos existem? ");
    scanf("%d", &num_pont_turistico1);
    limpar_buffer();

    // --- COLETANDO DADOS DA CARTA 2 ---
    printf("\n--- Agora, vamos para a segunda cidade ---\n");
    printf("Nome do Estado: ");
    fgets(estado2, 50, stdin);

    printf("Código da Carta: ");
    scanf("%49s", cod_carta2);
    limpar_buffer();

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
    limpar_buffer();

    // --- HORA DOS CÁLCULOS (A mágica acontece aqui) ---
    
    // Calculamos quantos habitantes vivem em cada km² (Densidade)
    densidade1 = (float)populacao1 / area_km1;
    densidade2 = (float)populacao2 / area_km2;

    // Calculamos a riqueza média por pessoa (PIB per Capita)
    // Multiplicamos o PIB por 1 bilhão para o valor ficar certinho em reais.
    pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // --- MOSTRANDO OS RESULTADOS ---
    printf("\n========================================");
    printf("\n         CARTAS CADASTRADAS");
    
    // O fgets guarda o "Enter" no final do nome, então a quebra de linha acontece sozinha.
    printf("\n\nCidade 1: %sCódigo: %s", nome_cidade1, cod_carta1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita1);

    printf("\n\nCidade 2: %sCódigo: %s", nome_cidade2, cod_carta2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita2);
    printf("\n========================================\n");

    return 0;
}