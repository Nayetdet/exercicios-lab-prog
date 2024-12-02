#include <stdio.h>

#define N 3

int main(void) {
    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Valores da diagonal principal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]);
    }
    
    return 0;
}
