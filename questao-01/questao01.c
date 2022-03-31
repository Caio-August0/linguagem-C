#include <stdio.h>

float calcularmedia(float a1, float a2) {
  
  float media;
  
  if ((a1 >= 0 && a1 <= 10) && (a2 >= 0 && a2 <= 10)) {
    media = (0.4 * a1) + (0.6 * a2); 
  }
  return media;
}

int main() {
  
  float a1 = 10;
  float a2 = 0;
  float media;

  media = calcularmedia(a1, a2);
  printf("Sua média é: %f\n", media);

  return 0;
}