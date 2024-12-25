#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int size;
    printf("Insira o tamanho do array X: ");
    scanf("%d", &size);

    int n;
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    int* x = (int*)malloc(size * sizeof(int));
    int* f = (int*)calloc(n, sizeof(int));
    if (!x || !f) {
        puts("Erro ao alocar memória");
        exit(1);
    }

    printf("\nX: ");
    for (int i = 0; i < size; i++) {
        x[i] = rand() % n;
        f[x[i]]++;
        printf("%d ", x[i]);
    }

    printf("\nF: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", f[i]);
    }

    printf("\n");

    free(x);
    free(f);

    return 0;
}
