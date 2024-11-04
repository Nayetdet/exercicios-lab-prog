#include <stdio.h>

int fatorial(int n) {
    if (n < 0) {
        return -1;
    }

    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
}

int main(void) {
    int valor;
    printf("Insira um numero inteiro: ");
    scanf("%d", &valor);

    int resultado = fatorial(valor);
    printf("Fatorial de %d: %d\n", valor, resultado);
    return 0;
}
