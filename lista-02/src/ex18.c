#include <stdio.h>

int main(void) {
    long long unsigned somatorio;
    for (int i = 0; i < 64; i++) {
        somatorio += (1ULL << i);
    }

    printf("Número de graus de trigo: %llu\n", somatorio);
    return 0;
}
