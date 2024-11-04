#include <stdio.h>

int main(void) {
    float valorMercadoria;
    printf("Insira o valor da mercadoria: ");
    scanf("%f", &valorMercadoria);

    int valorPrestacoes = (int)valorMercadoria / 3;
    float valorPrestacaoMaior = valorMercadoria - valorPrestacoes * 2;

    printf("\nValor da maior prestacao: %.2f\n", valorPrestacaoMaior);
    printf("Valor das outras duas prestacoes: %d\n", valorPrestacoes);

    return 0;
}
