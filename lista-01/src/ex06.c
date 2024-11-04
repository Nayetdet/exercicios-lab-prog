#include <stdio.h>

int main(void) {
    int segundos;
    int minutos;
    int horas;

    printf("Insira a quantidade de segundos, minutos e horas, neste formato (segundos minutos horas):\n");
    scanf("%d %d %d", &segundos, &minutos, &horas);

    int tempoTotal = segundos + minutos * 60 + horas * 3600;
    printf("\nQuantidade total de segundos: %d", tempoTotal);
    
    return 0;
}
