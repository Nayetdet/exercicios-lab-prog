#include <stdio.h>

int main(void) {
    double altura;
    printf("Informe sua altura (em metros): ");
    scanf("%lf", &altura);

    char sexo;
    printf("Informe seu sexo (M/F): ");
    scanf(" %c", &sexo);

    double pesoIdeal;
    if (sexo == 'M') {
        pesoIdeal = 72.7 * altura - 58;
    } else {
        pesoIdeal = 62.1 * altura - 44.7;
    }

    printf("\nPeso ideal: %.2lf kg\n", pesoIdeal);
    
    return 0;
}
