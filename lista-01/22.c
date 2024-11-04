#include <stdio.h>

int main(void) {
    int numero;
    printf("Insira um valor inteiro de 3 digitos: ");
    scanf("%d", &numero);

    int unidades = numero % 10;
    int dezenas = (numero / 10) % 10;
    int centenas = (numero / 100) % 10;
    int numeroRevertido = unidades * 100 + dezenas * 10 + centenas;

    printf("\nValor original: %d\n", numero);
    printf("Valor revertido: %d\n", numeroRevertido);

    return 0;
}
