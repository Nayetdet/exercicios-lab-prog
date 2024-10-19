#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("Insira os valores de x e y, neste formato (x y): ");
    scanf("%d %d", &x, &y);

    printf("x + y: %d", x + y);
    printf("x - y: %d", x - y);

    if (y != 0) {
        printf("x / y: %d", x / y);
        printf("x %% y: %d", x % y);
    } else {
        printf("Erro em calcular o quociente e o resto de x por y");
    }

    return 0;
}
