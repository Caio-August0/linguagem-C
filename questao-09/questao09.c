#include <stdio.h>
/*Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias*/

int main(void) {
  
  unsigned int idade = 17;

  const int MESESNOANO = 12;
  const int DIASNOANO = 365;
  
  int quantidade_em_ano;
  int quantidade_em_meses;
  int quantidade_em_dias;

    if (idade > 0) {
    quantidade_em_ano = idade;
    quantidade_em_meses = idade * MESESNOANO;
    quantidade_em_dias = (quantidade_em_meses * DIASNOANO);
  } else {
    return 0;
  } 
  
  printf("Sua idade convertida em\n Anos:%d \n Meses:%d \n Dias: %d",quantidade_em_ano, quantidade_em_meses, quantidade_em_dias);
  return 0;
}