#include <stdio.h>

#define TAXA_GARCOM 1.1

int main(void) {
    double contaRestaurante;
    printf("Insira o valor de uma conta de restaurante: ");
    scanf("%lf", &contaRestaurante);

    double valorTotal = contaRestaurante * TAXA_GARCOM;
    printf("\nValor da conta do restaurante: %.2lf\n", contaRestaurante);
    printf("Valor total: %.2lf\n", valorTotal);;

    return 0;
}
