#include <stdio.h>

void obterIntervalo(int* inicio, int* final) {
    printf("Insira um intervalo no formato (inicio final): ");
    scanf("%d %d", inicio, final);

    if (*inicio > *final) {
        int temp = *inicio;
        *inicio = *final;
        *final = temp;
    }
}

int main(void) {
    int inicio;
    int final;
    obterIntervalo(&inicio, &final);

    for (int n = inicio; n <= final; n++) {
        if (n % 4 == 0) {
            printf("%d^2 = %d\n", n, n * n);
        }
    }

    printf("\n");
    return 0;
}
