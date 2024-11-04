#include <stdio.h>

void fibonacci(int n) {
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", b);
        int tmp = b;
        b += a;
        a = tmp;
    }
}

int main(void) {
    fibonacci(20);
    printf("\n");
    return 0;
}
