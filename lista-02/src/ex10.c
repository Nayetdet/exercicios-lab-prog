#include <stdio.h>

int main(void) {
    for (int n = 15; n <= 90; n++) {
        if (n % 4 == 0) {
            printf("%d^2 = %d\n", n, n * n);
        }
    }

    printf("\n");
    return 0;
}
