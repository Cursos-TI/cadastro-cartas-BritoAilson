#include <stdio.h>


int main() {
  float temperatura, umidade;
  unsigned int estoque, estoqueMinimo = 1000;
  
  printf("Digite a temperatura: \n");
  scanf("%f", &temperatura);
  printf("Digite a umidade: \n");
  scanf("%f", &umidade);
  printf("Digite o estoque: \n");
  scanf("%u", &estoque);

  if (temperatura > 30.0) {
    printf("Temperatura esta alta\n");
  } else {
    printf("Temperatura esta dentro dos parametros!\n");
  }

  if (umidade > 50.0) {
    printf("Umidade esta elevada\n");
  } else {
    printf("Umidade esta dentro dos parametros!\n");
  }

  if (estoque < estoqueMinimo) {
    printf("Estoque esta abaixo do minimo!\n");
  } else {
    printf("Estoque normal!\n");
  }

  return 0;
}