#include <stdio.h>

float calcular_imposto(float preco_inicial) {

  float preco_final;
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASPEP = 0.0165f;

  if (preco_inicial > 0) {
    return preco_final = (1 + ICMS + COFINS + PIS_PASPEP) * preco_inicial;
  } else {
    return preco_final = 0.0f;
  }
  
}

int main(void) {

  float preco_inicial = 0.0f;
  float preco_final;

  preco_final = calcular_imposto(preco_inicial);
  printf(" O preço final, calculado com todos os impostos é: %f\n", preco_final );

  return 0;
}