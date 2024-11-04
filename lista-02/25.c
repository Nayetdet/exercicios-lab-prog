#include <stdio.h>
#include <math.h>

double calcularPI(int numTermos) {
    double aproximacaoPi = 0;
    for (int i = 0; i < numTermos; i++) {
        aproximacaoPi += (pow(-1, i)) / (2 * i + 1);
    }

    aproximacaoPi *= 4;
    return aproximacaoPi;
}


int main(void) {
    double pi = calcularPI(100);
    printf("PI = %lf\n", pi);

    return 0;
}
