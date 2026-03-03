#include <stdio.h>

int main() {
    int Populacao, Num_Pont_Turistico;
    float Area_Km, Pib;
    char Estado, Cod_Carta[50], Nome_Cidade[50];

    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado); 

    printf("Digite o Codigo da Carta: \n");
    scanf(" %s", Cod_Carta); 

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", Nome_Cidade);

    printf("Digite a Populacao: \n");
    scanf(" %d", &Populacao);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &Num_Pont_Turistico);

    printf("Digite a Area em Km: \n");
    scanf(" %f", &Area_Km);

    printf("Digite o PIB: \n");
    scanf(" %f", &Pib);

    // Saída formatada
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Cod_Carta);
    printf("Cidade: %s\n", Nome_Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Pontos Turisticos: %d\n", Num_Pont_Turistico);
    printf("Area: %.2f Km\n", Area_Km);
    printf("PIB: %.2f\n", Pib);

    return 0;
}
