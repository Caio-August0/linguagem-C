#include <stdio.h>
#include <math.h>
  
  int main (void) {

  int coeficiente_a = 2;
  int coeficiente_b = -7; 
  int coeficiente_c = 3;
  float x_1;
  float x_2;
  float delta;
    
  delta = pow(coeficiente_b,2) + (-4 * coeficiente_a * coeficiente_c);
    
  if (delta >= 0) {
    x_1 = (-coeficiente_b + sqrt(delta)) / (2 * coeficiente_a);
    x_2 = (-coeficiente_b - sqrt(delta)) / (2 * coeficiente_a);
    printf("Os valores de x são: x1: %.2f e x2:%.2f \n",x_1, x_2);
  } else {
    printf("Não é possível calcular x1 e x2, porque o valor de delta é negativo.");
  }
  return 0;
}