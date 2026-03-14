#include <stdio.h>

//int main() {
  //int idade;
  //float renda;

  //printf("Digite a sua idade: ");
  //scanf("%d", &idade);
  //printf("Digite a sua renda mensal: \n");
  //scanf("%f", &renda);

  //if (idade < 18 || idade > 60) {
    //if (renda < 2000.0) {
      //printf("Você está qualificado para o desconto especial\n");
    //} else {
      //printf("Você não está qualificado para o desconto devido à renda\n");
    //}
  //} else {
    //printf("Você não está qualificado para o desconto devido à idade\n");
  //}

  //return 0;
//}

//* -- Codigo corrigido --*/


//int main() {
  //int idade;
  //float renda;

  //printf("Digite a sua idade: ");
  //scanf("%d", &idade);
  //printf("Digite a sua renda mensal: ");
  //scanf("%f", &renda);

  // Protocolo: Verifica se a idade está ENTRE 18 e 60
  //if (idade >= 18 && idade <= 60) { 
    //if (renda < 2000.0) {
      //printf("Você está qualificado para o desconto especial\n");
    //} else {
      //printf("Você não está qualificado para o desconto devido à renda\n");
    //}
  //} else {
    //printf("Você não está qualificado para o desconto devido à idade (fora da faixa 18-60)\n");
  //}

  //return 0;
//}

/* ---- Estrutura Encadeada e Aninhada ---- */

#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }

  return 0;
}
