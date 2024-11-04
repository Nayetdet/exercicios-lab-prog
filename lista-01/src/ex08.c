#include <stdio.h>

int main(void)
{
    int x;
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);

    printf("\nAntecessor de X: %d\n", x - 1);
    printf("X: %d\n", x);
    printf("Sucessor de X: %d\n", x + 1);

    return 0;
}
