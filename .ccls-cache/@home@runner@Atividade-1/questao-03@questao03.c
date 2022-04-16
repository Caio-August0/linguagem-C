#include <stdio.h>

float calcular_perimetro_da_pizza(float raio){
  
  const float PI = 3.1416f;
  float perimetro;
  
  if(raio > 0) {
    perimetro = 2 * PI * raio;
  } else {
    perimetro = 0;
  }
  return perimetro;
}

int main(void) {
  
  unsigned int raio = 1;
  float perimetro_pizza;
  
  perimetro_pizza = calcular_perimetro_da_pizza(raio);
  printf("O perimetro da pizza é: %f\n",perimetro_pizza);
  
  return 0;
}