#include <stdio.h>

int main(void) {
    int x;
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);

    printf("\nValor original: %d\n", x);
    printf("Valor em hexadecimal: %#x\n", x);
    printf("Valor em octal: %#o\n", x);

    return 0;
}
