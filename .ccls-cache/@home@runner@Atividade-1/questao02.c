#include <stdio.h>

float calcularAereaDoTriangulo(int base, int altura) {
  
  float  resultado_da_area;
  
  if ((base != 0) && (altura != 0)) {
    resultado_da_area = (base * altura) / 2;
  } else {
    resultado_da_area = 0.0;
  }
  return resultado_da_area;
}

int main(void) {
  
  int base;
  int altura;
  
  float area_do_triangulo = calcularAereaDoTriangulo(base,altura);
  printf("A area do triângulo é: %f\n", area_do_triangulo);
  
  return 0; 
}