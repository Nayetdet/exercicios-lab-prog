#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    printf("Insira um valor real: ");
    scanf("%lf", &x);

    printf("\nValor original: %lf\n", x);
    printf("Valor absoluto: %lf\n", fabs(x));

    return 0;
}
