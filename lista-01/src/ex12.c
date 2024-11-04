#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Insira os valores a e b, neste formato (a b): ");
    scanf("%d %d", &a, &b);

    printf("\nValor inicial de A: %d\n", a);
    printf("Valor inicial de B: %d\n", b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("\nValor final de A: %d\n", a);
    printf("Valor final de B: %d\n", b);

    return 0;
}
