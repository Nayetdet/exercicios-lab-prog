#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado; 
}

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d! = %d\n", i, fatorial(i));
        }
    }
    
    return 0;
}
