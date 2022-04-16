#include <stdio.h>

float calcular_aerea_do_triangulo(int base, int altura) {
  
  float  resultado_da_area;
  
  if ((base > 0.0f) && (altura > 0.0f)) {
    return resultado_da_area = (base * altura) / 2.0f;
  } else {
    return resultado_da_area =  0.0;
  }
  
}

int main(void) {
  
  unsigned int base = 5;
  unsigned int altura = 7;
  float area_do_triangulo;

  area_do_triangulo = calcular_aerea_do_triangulo(base,altura);
  printf("A area do triângulo é: %f\n", area_do_triangulo);
  
  return 0; 
}