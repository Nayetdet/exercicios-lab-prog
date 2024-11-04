#include <stdio.h>
#include <math.h>

int main(void) {
    int x1, y1;
    printf("Insira os valores x1 e y1 (em metros), neste formato (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    int x2, y2;
    printf("Insira os valores x2 e y2 (em metros), neste formato (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nDistancia: %.2lf m\n", distancia);

    return 0;
}
