#include <stdio.h>

int main(void) {
    int x, y;
    printf("Insira os valores x e y, neste formato (x y): ");
    scanf("%d %d", &x, &y);

    printf("\n%d: %seh multiplo de %d\n", x, (x % y == 0) ? "" : "nao ", y);

    return 0;
}
