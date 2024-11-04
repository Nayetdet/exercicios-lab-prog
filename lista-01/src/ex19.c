#include <stdio.h>

int main(void) {
    int x;
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);

    printf("\n%d: %s\n", x, (x % 2 == 0) ? "par" : "impar");

    return 0;
}
