#include <stdio.h>

void obterValores(int* x, int* y) {
    do {
        printf("Insira dois numeros x e y, no formato (x y): ");
        scanf("%d %d", x, y);

        if (*y == 0) {
            printf("Valor invalido, o divisor nao pode ser nulo!\n");
        }
    } while (*y == 0);
}

int main(void) {
    int x, y;
    obterValores(&x, &y);

    float resultado = (float)x / y;
    printf("%d / %d = %.2f\n", x, y, resultado);

    return 0;
}
