#include <stdio.h>

float calcular_media(float a1, float a2) {
  
  float media;
  
  if ((a1 >= 0.0f && a1 <= 10) && (a2 >= 0.0f && a2 <= 10)) {
    media = (0.4f * a1) + (0.6f * a2); 
  } 
  
  return media;
  
}

int main() {
  
  float a1 = 11.0f;
  float a2 = 0.0f;
  float media;

  media = calcular_media(a1, a2);
  printf("Sua média é: %f\n", media);

  return 0;
}