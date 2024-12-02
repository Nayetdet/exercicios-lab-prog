#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3

int main(void) {
    srand(time(NULL));

    int array[TAM];
    int soma = 0;
    int produto = 1;

    for (int i = 0; i < TAM; i++) {
        int valor = rand() % 20;
        printf("Valor %d: %d\n", i + 1, valor);

        soma += valor;
        produto *= valor;
        array[i] = valor;
    }

    float mediaAritmetica = soma / TAM;
    float mediaGeometrica = pow(produto, (1 / TAM));
    
    printf("\nMedia Aritmetica: %.2f\n", mediaAritmetica);
    printf("Media Geometrica: %.2f\n", mediaGeometrica);

    return 0;
}
