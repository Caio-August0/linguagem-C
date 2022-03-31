#include <stdio.h>

float calcularPerimetroDaPizza(float raio){
  
  const float PI = 3.1416;
  float perimetro;
  
  if(raio != 0 ) {
    perimetro = 2 * PI * raio;
  } else {
    perimetro = 0;
  }
  return perimetro;
}

int main(void) {
  
  float raio = 0.5;
  float perimetro_pizza;
  
  perimetro_pizza = calcularPerimetroDaPizza(raio);
  printf("O perimetro da pizza é: %f\n",perimetro_pizza);
  
  return 0;
}