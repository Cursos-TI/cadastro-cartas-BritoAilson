#include <stdio.h>
 
//int main() {
    //int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    //unsigned int unsignedNumber = 3000000000;
 
    //printf("Número com sinal: %d\n", signedNumber);
    //printf("Número sem sinal: %u\n", unsignedNumber);
 
   // return 0;

   
 
//int main() {
    //int regularNumber = 2147483647; // Valor máximo de int
    //long int bigNumber = 2147483647;
 
    //printf("Número regular (int): %d\n", regularNumber);
    //printf("Número grande (long int): %ld\n", bigNumber);
 
    //bigNumber = 2147483648; // Valor maior que o máximo de int
    //printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    //return 0;

 
//int main() {
    //double preciseNumber = 3.141592653589793;
    //long double veryPreciseNumber = 3.14159265358979323846;
 
    //printf("Número preciso (double): %.15f\n", preciseNumber);
    //printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
 
    //return 0;

   
 
//int main() {
    //unsigned long int largePositiveNumber = 4000000000;
    //printf("Número positivo grande: %lu\n", largePositiveNumber);
 
    //return 0;
//#include <stdio.h>
//#include <limits.h> // Biblioteca para ver os limites dos tipos

/**
 * Projeto: ModificadoresDados.c
 * Objetivo: Demonstrar o uso de unsigned, short e long.
 * Padrao: Producao - Tratamento de tipos e memoria.
 */

int main() {
    // 1. SHORT: Economia de memoria (usa apenas 2 bytes em vez de 4)
    short int contadorCiclos = 32767; 

    // 2. UNSIGNED: Apenas valores positivos (dobra o limite positivo)
    unsigned int registrosTotais = 4000000000U;

    // 3. LONG: Para numeros muito grandes (essencial para Timestamps de SQL)
    long long timestampUnix = 1715832000LL;

    // 4. SIGNED: O padrao (aceita negativos e positivos)
    signed int temperaturaSensor = -15;

    printf("--- Teste de Modificadores em C ---\n");

    // Exibicao com formatadores especificos
    printf("> Short (Ciclos):     %hd (Ocupa menos RAM)\n", contadorCiclos);
    printf("> Unsigned (Registros): %u (Nao aceita negativos)\n", registrosTotais);
    printf("> Long Long (Time):   %lld (Alta precisao temporal)\n", timestampUnix);
    printf("> Signed (Temp):      %d (Sinalizado)\n", temperaturaSensor);

    printf("-----------------------------------\n");

    return 0;
}


