#include <stdio.h>

#define ALVO 7

int obterNumAlgarismosAlvo(int valor, int alvo) {
    int resultado = 0;
    while (valor != 0) {
        int digito = valor % 10; 
        valor /= 10;

        if (digito == alvo) {
            resultado++;
        }
    }

    return resultado;
}

int main(void) {
    int valor;
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);

    int numAlgarismosAlvo = obterNumAlgarismosAlvo(valor, 7);
    printf("Quantidade de algarismos %d em %d: %d\n", ALVO, valor, numAlgarismosAlvo);
    return 0;
}
