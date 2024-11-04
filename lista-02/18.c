#include <stdio.h>
#include <math.h>

int main(void) {
    int somatorio = 0;
    for (int i = 0; i < 64; i++) {
        somatorio += pow(2, i);
    }

    printf("Numero de graus de trigo: %d\n", somatorio);
    return 0;
}
