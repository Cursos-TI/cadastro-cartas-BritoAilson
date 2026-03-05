#include <stdio.h>
#include <string.h>

// Função auxiliar para limpar o buffer do teclado (evita o "pulo" de inputs)
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int populacao, num_pont_turistico;
    float area_km, pib;
    char estado[50], cod_carta[50], nome_cidade[50];

    // Leitura do Estado (String)
    printf("Digite o nome do Estado: ");
    fgets(estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0; // Remove o '\n' que o fgets adiciona

    // Leitura do Código
    printf("Digite o Codigo da Carta: ");
    scanf("%49s", cod_carta);
    limpar_buffer(); // Limpa o buffer após scanf

    // Leitura da Cidade
    printf("Digite o Nome da Cidade: ");
    fgets(nome_cidade, 50, stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = 0;

    // Leitura de dados numéricos
    printf("Digite a Populacao: ");
    if (scanf("%d", &populacao) != 1) return 1; // Tratamento básico de erro

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &num_pont_turistico);

    printf("Digite a Area em Km: ");
    scanf("%f", &area_km);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    // Saída formatada
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", cod_carta);
    printf("Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", num_pont_turistico);
    printf("Area: %.2f Km\n", area_km);
    printf("PIB: %.2f\n", pib);

    return 0;
}
