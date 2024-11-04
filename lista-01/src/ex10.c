#include <stdio.h>

int main(void) {
    double cotacaoDolar;
    printf("Informe a cotacao atual do dolar: ");
    scanf("%lf", &cotacaoDolar);

    double valorEmReais;
    printf("Informe o valor em reais: ");
    scanf("%lf", &valorEmReais);

    double valorEmDolares = valorEmReais / cotacaoDolar;
    printf("\nValor em reais: %2.lf\n", valorEmReais);
    printf("Valor em dolares: %2.lf\n", valorEmDolares);

    return 0;
}
