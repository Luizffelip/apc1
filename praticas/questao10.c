#include <stdio.h>

int main() {
    int numero, unidades, dezenas, centenas, milhares;

    printf("Digite um numero inteiro de ate 4 digitos: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 9999) {
        printf("Numero fora do intervalo permitido.\n");
    } else {
        unidades = numero % 10;
        dezenas = (numero / 10) % 10;
        centenas = (numero / 100) % 10;
        milhares = (numero / 1000) % 10;

        printf("O numero %d e decomposto em:\n", numero);
        printf("Unidades: %d\n", unidades);
        printf("Dezenas: %d\n", dezenas);
        printf("Centenas: %d\n", centenas);
        printf("Milhares: %d\n", milhares);
    }

    return 0;
}