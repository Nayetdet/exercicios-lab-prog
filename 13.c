#include <stdio.h>

int main(void) {
    double temperaturaEmCelsius;
    printf("Insira a temperatura em Celsius: ");
    scanf("%lf", &temperaturaEmCelsius);

    double temperaturaEmFahrenheit = (9 * temperaturaEmCelsius + 160) / 5;
    printf("\nTemperatura em Celsius: %.2lf\n", temperaturaEmCelsius);
    printf("Temperatura em Fahrenheit: %.2lf\n", temperaturaEmFahrenheit);

    return 0;
}
