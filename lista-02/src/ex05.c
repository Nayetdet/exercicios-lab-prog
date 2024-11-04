#include <stdio.h>
#include <limits.h>

void obterMinMax(int* min, int* max) {
    *min = INT_MAX;
    *max = INT_MIN;

    int valor;
    do {
        printf("Insira um valor inteiro: ");
        scanf("%d", &valor);

        if (valor < *min) {
            *min = valor;
        }

        if (valor > *max) {
            *max = valor;
        }
    } while (valor != 0);
}

int main(void) {
    int min, max;
    obterMinMax(&min, &max);

    printf("\nMenor valor inserido: %d\n", min);
    printf("Maior valor inserido: %d\n", max);
    return 0;
}
