#include <stdio.h>
/*Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/

int main(void) {
  
  int numero = 5874;

  int milhar;
  int centena;  
  int dezena;
  int unidade;
  
  milhar = numero /1000;
  centena = (numero % 1000) / 100;
  dezena = numero % 100;
  unidade = numero % 10;
  dezena = dezena / 10;

  printf("Milhar: %d, Centena %d, Dezena: %d, Unidade %d \n", milhar, centena, dezena, unidade);
  
  
  return 0;
}