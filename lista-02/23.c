#include <stdio.h>

void exibirPreIncremento(int x) {
    printf("Valor original de x: %d\n", x);
    printf("Apos pre-incremento (++x): %d\n", ++x);
    printf("Valor de x após pre-incremento: %d\n", x);
}

void exibirPosIncremento(int x) {
    printf("Valor original de x: %d\n", x);
    printf("Valor de x antes do pos-incremento (x++): %d\n", x);
    printf("Valor de x apos pos-incremento: %d\n", x++);
}

int main(void) {
    int x = 10;
    exibirPreIncremento(x);

    printf("\n");
    exibirPosIncremento(x);

    return 0;
}
