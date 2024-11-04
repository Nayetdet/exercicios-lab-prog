#include <stdio.h>
#include <math.h>

int obterNumAlgarismos(int n) {
    int resultado = 0;
    while (n != 0) {
        n /= 10;
        resultado++;
    }

    return resultado;
}

int obterNumeroRevertido(int n) {
    int resultado = 0;
    int i = obterNumAlgarismos(n);

    while (n != 0) {
        int digito = n % 10;
        resultado += digito * pow(10, --i);
        n /= 10;
    }

    return resultado;
}

int main(void) {
    int valor;
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);

    int valorRevertido = obterNumeroRevertido(valor);
    printf("Valor Revertido: %d\n", valorRevertido);
    return 0;
}
