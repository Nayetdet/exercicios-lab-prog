#include <stdio.h>

int main(void) {
    double horaAula;
    printf("Informe o valor da hora-aula: ");
    scanf("%lf", &horaAula);

    int horasTrabalhadas;
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    double percentualDiscontoINSS;
    printf("Informe o percentual de desconto do INSS: ");
    scanf("%lf", &percentualDiscontoINSS);

    double salarioBruto = horaAula * horasTrabalhadas;
    double salarioLiquido = salarioBruto * percentualDiscontoINSS;

    printf("\nSalario bruto do professor: %.2lf\n", salarioBruto);
    printf("Salario liquido do professor: %.2lf\n", salarioLiquido);

    return 0;
}
