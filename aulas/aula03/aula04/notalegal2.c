#include <stdio.h>

int main() {
  char item[61] = "Caderno";
  int quantidade = 1;
  float valor = 25.0f;
  
 printf("entre com o nome do item 1: ");
 scanf("%s", item1);
 printf("entre com a qtde do item 1:");
 scanf("%i", &quantidade1);
  
  
  printf("-------------------------------------------------\n");
  printf("             N O T A      L E G A L              \n");
  printf("-------------------------------------------------\n");
  printf("Item                         Qtd      Valor      \n");
  printf("%-28s %03i %16.2f\n", item, quantidade, valor);
  char item2[] = "Caneta";
  quantidade = 4;
  valor = 2.0f;
  printf("%-28s %03i %16.2f\n", item2, quantidade, valor);
  char item3[] = "Borracha";
  quantidade = 10;
  valor = 5.0f;
  printf("%-28s %03i %16.2f\n", item3, quantidade, valor);
  char item4[] = "Lapis";
  quantidade = 5;
  valor = 1.0f;
  printf("%-28s %03i %16.2f\n", item4, quantidade, valor);
  printf("-------------------------------------------------\n");
  printf("Total                                       98,00\n");
  printf("-------------------------------------------------\n");


   
  return 0;
}