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
    } while (valor >= 0 || valor % 2); 
}

int main(void) {
    int min, max;
    obterMinMax(&min, &max);

    int resultado = min * max;
    printf("O resultado da multiplicao do minimo pelo maximo: %d", resultado);

    return 0;
}
