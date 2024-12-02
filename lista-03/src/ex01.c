#include <stdio.h>

#define TAM 15

int main(void) {
    float array[TAM];
    float min;
    float max;

    for (int i = 0; i < TAM; i++) {
        printf("Insira o %do valor: ", i + 1);
        scanf("%f", &array[i]);

        if (i == 0) {
            min = array[i];
            max = array[i];
        }

        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }

    printf("\nMenor valor: %f\n", min);
    printf("Maior valor: %f\n", max);
    printf("Soma: %f\n", min + max);
    
    return 0;
}
