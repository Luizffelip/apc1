#include  <stdio.h>

int main() {
int numero = 0;
  long int fatorial = 1;

  printf("entre com um numero inteiro ");
  int leu_certo = scanf("%i", &numero);
  
  for(int i = numero; i > 1; i--) { 
    fatorial = fatorial * i;
  }

  printf("o fatorial de %i eh %li\n", numero, fatorial);

  return 0;
}