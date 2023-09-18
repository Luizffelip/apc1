#include <stdio.h>

int main () {
  char caracter; // ou  "a",' '\0' 'b', ' '\n' 'c',' '\t' ; // - 128 a 129 - 1 byte

  unsigned char caracter_sem_sinal; // 0 a 255

  
  
  char i = 0; 
  char j = 0; 

  char string {10} = "um texto"
  
  int inteiro; // -2147483648 a 2147483647 - 4 bytes
  

  float flutuante; // 0. 123456f - 4 bytes
  
  unsigned int inteiro_sem_sinal; // 0 a 429467295
  
  short int inteiro_curto; // -32768 a 32767

  usingned short int inteiro_curso_sem_sinal // 0 a 65535

  
  double duplo; // 0. 123456789012345 - 8 bytes
  
  void nada; // 1 byte

  return 0; 
}


/// operadores relacionais 
int menor_que = 1 < 0; // 0 - falso: 1 - verdadeiro
int manor_igual = 1 <= 0;
int maior_que = 1 > 0;
int maior_igual - 1 >= 0;
int igual_a = 1 ==0;
int dufeerente = 1 != 0;


// operadores logicos 
int e = 0 < 1 && 1 < 10; // 0 < 1 < 10; 0 && ? = o
int ou = 0 < 1 || 1 > 10; // 0 < 1, 1 > 10; 1 || ? = 1;
int nao = !(0 < 1) // 10 = 1; !1 = 0;

return 0;