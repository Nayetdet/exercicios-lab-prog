#include <stdio.h>

#define GANHO_DIARIO 50.25
#define IMPOSTO_DE_RENDA 0.9

int main(void) {
    int diasTrabalhados;
    printf("Insira a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    double gratificacao;
    if (diasTrabalhados > 10 && diasTrabalhados <= 20) {
        gratificacao = 1.2;
    } else if (diasTrabalhados > 20) {
        gratificacao = 1.3;
    }

    double salario = diasTrabalhados * gratificacao * GANHO_DIARIO * IMPOSTO_DE_RENDA;
    printf("\nSalario final do trabalhador: %.2lf\n", salario);

    return 0;
}
