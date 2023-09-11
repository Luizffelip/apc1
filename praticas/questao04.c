
#include <stdio.h>

int main () { 
float preco_inicial = 100.0f;
float valor_icms = preco_inicial * 0.17f;
float valor_confins = preco_inicial * 0.076f;
float valor_pispasep = preco_inicial * 0.0165f;

float preço_final = (1 +  0.17f + 00.76 + 0.0165) * preco_inicial;

printf("O preco inicial é %f\n", preco_inicial);
printf("O valor ICMS é %f\n", valor_icms);
printf("O valor CONFINS é %f\n", valor_confins);
printf ("O valor PIS_PASEP%f\n", valor_pispasep); 

  return 0;
}


