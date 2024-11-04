#include <stdio.h>

int main(void) {
    double comprimento;
    double largura;
    double altura;

    printf("Insira o comprimento, largura e altura (em metros), neste formato (comprimento largura altura): ");
    scanf("%lf %lf %lf", &comprimento, &largura, &altura);

    double volume = comprimento * largura * altura;
    printf("\nVolume da caixa: %.2lf m^3\n", volume);

    return 0;
}
