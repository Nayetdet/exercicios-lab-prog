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
    int inicio, final;
    obterIntervalo(&inicio, &final);

    int soma = 0;
    for (int i = inicio; i <= final; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("Somatorio dos numeros pares no intervalo de %d a %d: %d\n", inicio, final, soma);
    return 0;
}
