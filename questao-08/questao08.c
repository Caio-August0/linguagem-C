#include <stdio.h>

float conversao_de_tempo(int segundos) {
  
  const int HORASEMSEGUNDOS = 3600;  
  const float SEGUNDOSEMHORA  = 0.000277778f;
  
  float resultado_em_horas;

  if (segundos >= HORASEMSEGUNDOS) {
    return resultado_em_horas = (float) segundos * SEGUNDOSEMHORA;
  } else {
    return 0;
  }
}

int main(void) {
  unsigned int segundos = 4600;
  float resultado_em_horas;

  resultado_em_horas = conversao_de_tempo(segundos);
  printf("O resultado em horas é: %.2f horas.\n", resultado_em_horas);

  return 0;
}