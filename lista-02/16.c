#include <stdio.h>

int main(void) {
    int somatorioMultiplosDe3 = 0;
    int somatorioMultiplosDe5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            somatorioMultiplosDe3 += i;
        } else if (i <= 200 && i % 5 == 0) {
            somatorioMultiplosDe5 += i;
        }
    }
    
    printf("Somatorio dos multiplos de 3 no intervalo de 0 a 100: %d\n", somatorioMultiplosDe3);
    printf("Somatorio dos multiplos de 5 no intervalo de 0 a 100: %d\n", somatorioMultiplosDe5);
    return 0;
}
