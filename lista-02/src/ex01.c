#include <stdio.h>

const char* DIAS_DA_SEMANA[] = {
    "Domingo",
    "Segunda",
    "Terca",
    "Quarta",
    "Quinta",
    "Sexta",
    "Sabado"
};

int main(void) {
    int valor = 1;
    while (valor != 0) {
        printf("Insira um numero correspondente a um dia da semana (1-7): ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 7) {
            printf("Numero de dia nao valido\n");
        } else {
            printf("Dia da semana correspondente: %s\n", DIAS_DA_SEMANA[valor - 1]);
        }
    }
    return 0;
}
