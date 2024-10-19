#include <stdio.h>

int main(void) {
    int segundos;
    printf("Insira o tempo em segundos: ");
    scanf("%d", &segundos);

    int minutos = segundos / 60;
    segundos %= 60;

    int horas = minutos / 60;
    minutos %= 60;

    printf("\n%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
