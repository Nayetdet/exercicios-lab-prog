#include <stdio.h>

int main(void) {
    double x;
    printf("Insira um valor real: ");
    scanf("%lf", &x);

    printf("\nValor original: %lf\n", x);
    printf("Valor truncado: %.1lf\n", x);

    return 0;
}
