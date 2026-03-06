//#include <stdio.h>

//int main() {
    //int a = 10;
    //int b = 20;

    //printf("a > b: %d\n", a > b);
    //printf("a < b: %d\n", a < b);
    //printf("a == b: %d\n", a == b);
    //printf("a != b: %d\n", a != b);

    //return 0;
//}

#include <stdio.h>
#include <stdbool.h> // Biblioteca para usar o tipo 'bool'

/**
 * Projeto: OperadoresRelacionais.c
 * Objetivo: Comparar variaveis de processo (Sensores vs Setpoints).
 * Padrao: FlowFuse Expert / Integridade de Pacotes.
 */

//int main() {
    //float tempAtual = 75.5;
    //float setpointMax = 80.0;
    //float setpointMin = 20.0;

    //printf("--- Monitor de Processo (Relacional) ---\n");
    //printf("Temperatura Atual: %.1f C\n", tempAtual);
    //printf("Limite Superior:   %.1f C\n\n", setpointMax);

    // Aplicando os operadores relacionais
    //printf("> Maior que ( > ):         %d\n", tempAtual > setpointMax);    // 0 (Falso)
    //printf("> Menor que ( < ):         %d\n", tempAtual < setpointMax);    // 1 (Verdadeiro)
    //printf("> Igual a ( == ):          %d\n", tempAtual == 80.0);         // 0 (Falso)
    //printf("> Diferente de ( != ):     %d\n", tempAtual != 0.0);          // 1 (Verdadeiro)
    //printf("> Maior ou Igual ( >= ):   %d\n", tempAtual >= 75.5);         // 1 (Verdadeiro)
    //printf("> Menor ou Igual ( <= ):   %d\n", tempAtual <= setpointMin);  // 0 (Falso)

    // Exemplo de tomada de decisao (Intertravamento)
    //if (tempAtual >= setpointMax) {
        //printf("\n[ALERTA]: Temperatura acima do limite! Desligando carga.\n");
    //} else {
        //printf("\n[STATUS]: Operacao Normal.\n");
   // }

    //printf("----------------------------------------\n");

    //return 0;
#include <stdio.h>

/**
 * Projeto: ComparacaoTipos.c
 * Objetivo: Demonstrar conversao implicita e explicitas (casting).
 * Padrao: Otimizacao de Performance / Time Series.
 */

int main() {
    int   contadorItens = 10;     // Inteiro (4 bytes)
    float pesoUnitario  = 10.0;   // Ponto Flutuante (4 bytes, mas com precisao decimal)
    double precisaoAlta = 10.000; // Double (8 bytes - maior precisao)

    printf("--- Analise de Tipos Mistos ---\n\n");

    // 1. Comparando Int com Float
    // O C promove o 'int' para 'float' temporariamente para comparar.
    if (contadorItens == pesoUnitario) {
        printf("[OK] Int (%d) e Float (%.1f) sao logicamente iguais.\n", contadorItens, pesoUnitario);
    }

    // 2. O Perigo: Comparar Float com Double
    // Float tem precisao de ~6 casas, Double tem ~15. 
    // Em calculos complexos, 10.0 float pode ser 10.0000001 double.
    if (pesoUnitario == (float)precisaoAlta) {
        printf("[OK] Float e Double conferem usando Casting explicito.\n");
    }

    // 3. Comparando Char com Int
    // Em C, um 'char' e internamente um numero (ASCII).
    char letra = 'A'; // ASCII 65
    int codigo = 65;

    if (letra == codigo) {
        printf("[OK] O caractere '%c' e igual ao codigo ASCII %d.\n", letra, codigo);
    }

    printf("\n-------------------------------\n");

    return 0;
}
