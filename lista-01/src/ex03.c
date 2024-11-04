#include <stdio.h>

int main(void) {
    int x;
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);

    printf("\nX: %d\n", x);
    printf("3X: %d\n", x * 3);
    printf("X^2: %d\n", x * x);

    return 0;
}
