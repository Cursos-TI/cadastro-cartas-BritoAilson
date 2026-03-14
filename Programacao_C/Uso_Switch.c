#include <stdio.h>

//int main() {
  //int opcao;

  //printf("Escolha uma opção:\n");
  //printf("1. Verificar saldo\n");
  //printf("2. Fazer depósito\n");
  //printf("3. Fazer saque\n");
  //scanf("%d", &opcao);

  //switch (opcao) {
    //case 1:
      //printf("Saldo atual: R$ 1.000,00\n");
      //break; // Utilizado para evitar que o código continue executando os próximos cases
    //case 2:
      //printf("Depósito realizado com sucesso\n");
      //break;// Utilizado para evitar que o código continue executando os próximos cases
    //case 3:
      //printf("Saque realizado com sucesso\n");
      //break;// Utilizado para evitar que o código continue executando os próximos cases
    //default:
      //printf("Opção inválida\n");
  //}

  //return 0;
//}

//int main() {
  //int dia ;
    //printf("Digite um número de 1 a 7 para representar um dia da semana: \n");
    //scanf("%d", &dia);

  //if (dia == 1) {
    //printf("Domingo\n");
  //} else if (dia == 2) {
    //printf("Segunda-feira\n");
  //} else if (dia == 3) {
    //printf("Terça-feira\n");
  //} else if (dia == 4) {
    //printf("Quarta-feira\n");
  //} else if (dia == 5) {
    //printf("Quinta-feira\n");
  //} else if (dia == 6) {
    //printf("Sexta-feira\n");
  //} else if (dia == 7) {
    //printf("Sábado\n");
  //} else {
    //printf("Dia inválido\n");
  //}

  //return 0;
//}

#include <stdio.h>

int main() {
  int dia;

  printf("Digite um número de 1 a 7 para representar um dia da semana: \n");
  scanf("%d", &dia);

  switch (dia) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Dia inválido\n");
  }

  return 0;
}