#include <stdio.h>
#include <math.h>

int main(void) {
    for (int i = 0; i <= 7; i++) {
        int resultado = pow(3, i);
        printf("3^%d = %d\n", i, resultado);
    }

    return 0;
}
