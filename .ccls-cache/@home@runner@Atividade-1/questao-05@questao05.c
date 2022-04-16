#include <stdio.h>
#include <math.h>

float conversao_de_gigabytes_para_bytes(float gigabytes){

  float valor_em_bytes;
  const int BYTES = 1024;
  
  if (gigabytes > 0) {
    return valor_em_bytes = gigabytes *  pow(BYTES, 3);
  } else {
   return valor_em_bytes = 0.0f; 
  }
   
}

int main(void) {

  float gigabytes = 2.5f;
  float valor_em_bytes;
  
  valor_em_bytes = conversao_de_gigabytes_para_bytes(gigabytes);
  printf("O valor de %.2f GB em bystes é: %.2f\n",gigabytes, valor_em_bytes);
  
  return 0;
  
}