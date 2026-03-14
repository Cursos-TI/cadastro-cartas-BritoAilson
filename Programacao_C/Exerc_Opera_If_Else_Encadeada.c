#include <stdio.h>

//int main() {
  //int idade;

  //printf("Digite a sua idade: \n");
  //scanf("%d", &idade);

  //if (idade < 12) {
    //printf("Você é uma criança\n");
  //} else if (idade >= 12 && idade < 18) {
    //printf("Você é um adolescente\n");
  //} else if (idade >= 18 && idade < 60) {
    //printf("Você é um adulto\n");
  //} else {
    //printf("Você é um idoso\n");
  //}

  //return 0;
//}



//int main() {
  //int idade;

  //printf("Digite a sua idade: \n");
  //scanf("%d", &idade);

  // Invertendo a ordem: do maior para o menor
  //if (idade >= 60) {
    //printf("Você é um idoso\n");
 // } else if (idade >= 18) { // Não precisa de && idade < 60, pois o 'if' acima já tratou isso
    //printf("Você é um adulto\n");
  //} else if (idade >= 12) { // Não precisa de && idade < 18
    //printf("Você é um adolescente\n");
  //} else {
    //printf("Você é uma criança\n");
  //}

  //return 0;
//}



int main() {
  int nota;

  printf("Digite a sua nota: \n");
  scanf("%d", &nota);

  if (nota >= 90) {
    printf("Sua nota é A\n");
  } else if (nota >= 80) {
    printf("Sua nota é B\n");
  } else if (nota >= 70) {
    printf("Sua nota é C\n");
  } else if (nota >= 60) {
    printf("Sua nota é D\n");
  } else {
    printf("Sua nota é F\n");
  }

  return 0;
}