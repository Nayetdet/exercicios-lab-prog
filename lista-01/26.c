#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    double y;
    double z;

    printf("Insira 3 valores no formato x y z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    double mediaAritmetica = (x + y + z) / 3;
    double mediaGeometrica = pow(x * y * z, 1 / 3);

    printf("\nMedia Aritmetica: %lf\n", mediaAritmetica);
    printf("Media Geometrica: %lf\n", mediaGeometrica);

    return 0;
}
