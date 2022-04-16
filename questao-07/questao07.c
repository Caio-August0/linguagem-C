#include <stdio.h>
#include <math.h>

float calcular_altura_alcancada(angulo, distancia){
  
  const float PI = 3.14f;
  float val = PI/180;
  float radicando = sin(angulo * val); 
  float altura_alcancada;
  
  if ((angulo > 0 && angulo <= 45) && distancia > 0) {
    return altura_alcancada = radicando * distancia ;  
  } else {
    return 0;
  }
}

int main(void) {

  float angulo = 45.f;
  float distancia = 1000.0f;
  float altura_alcancada;

  altura_alcancada = calcular_altura_alcancada(angulo,distancia);
  printf("A altura alcançada pelo avião é: %.2f\n", altura_alcancada);


  
  return 0;
}