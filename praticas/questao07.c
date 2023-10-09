#include <stdio.h>

int main() {
int nota = 0;

 printf("entre com uma nota entre 1 e 5:" );
  scanf("%i", &nota);

 if (nota ==1) {  
   printf("ruim\n");
 } else if (nota == 2) {   
 printf("insuficiente\n");
 } else if (nota == 3) {  
 printf("suficiente\n");
} else if (nota == 4) {  
printf("bom\n");  
}


  return 0;
    }