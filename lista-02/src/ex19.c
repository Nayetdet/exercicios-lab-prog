#include <stdio.h>

void obterIntervalo(int* inicio, int* final) {
    printf("Insira um intervalo no formato (inicio final): ");
    scanf("%d %d", inicio, final);

    if (*inicio > *final) {
        int tmp = *inicio;
        *inicio = *final;
        *final = tmp;
    }
}

int main(void) {
    int inicio;
    int final;
    obterIntervalo(&inicio, &final);

    int somatorioNumeros = 0;
    int qntdNumeros = final - inicio;

    for (int i = inicio; i <= final; i++) {
        somatorioNumeros += i;
    }

    float mediaAritmetica = (float)somatorioNumeros / qntdNumeros;
    printf("Media aritmetica: %.2lf\n", mediaAritmetica);
    
    return 0;
}
