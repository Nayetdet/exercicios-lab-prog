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

    int numMultiplosDe3 = 0;
    for (int n = inicio; n <= final; n++) {
        if (n % 3 == 0) {
            numMultiplosDe3++;
        }
    }
    
    printf("Quantidade de numeros multiplos de 3 no intervalo de %d a %d: %d\n", inicio, final, numMultiplosDe3);
    return 0;
}
