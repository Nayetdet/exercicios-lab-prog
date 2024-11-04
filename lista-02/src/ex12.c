#include <stdio.h>

void exibirTabuada(int valor) {
    if (valor < 0) {
        printf("O valor deve ser maior ou igual a zero\n");
        return;
    }

    for (int i = valor; i >= 0; i--) {
        int resultado = valor * i;
        printf("%d x %d = %d\n", valor, i, resultado);
    }
}

int main(void) {
    int valor;
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);

    exibirTabuada(valor);
    return 0;
}
