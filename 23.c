#include <stdio.h>

int main(void) {
    int x;
    int n;

    printf("Insira os valores x e n, neste formato (x n): ");
    scanf("%d %d", &x, &n);

    int produto = x * (1 << n);
    printf("\nx * 2^n = %d\n", produto);

    return 0;
}
