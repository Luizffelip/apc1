#include <stdio.h>

int main() {

int numero = 0;
  
printf("entre com um numero entre 1 e 10:  ");
  int leu_certo = scanf("%i", &numero);

  for(int i = 10; i > 0; i++) {
    printf("%i x %i = %i\n", numero, i, numero * i);
      }

  
  return 0;

}