#include <stdio.h>
#include <limits.h>

int main(void) {
    int valor;
    int menorValor = INT_MAX;
    int maiorValor = INT_MIN;

    do {
        printf("Insira um valor inteiro: ");
        scanf("%d", &valor);

        if (valor < menorValor) {
            menorValor = valor;
        }

        if (valor > maiorValor) {
            maiorValor = valor;
        }
    } while (valor != 0);

    printf("\nMenor valor inserido: %d\n", menorValor);
    printf("Maior valor inserido: %d\n", maiorValor);

    return 0;
}
