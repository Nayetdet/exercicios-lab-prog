#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** getZeroSquareMatrix(int order);
void displayArray(const char* text, int size, const int* array);
void displaySquareMatrix(const char* text, int order, int** matrix);
void freeSquareMatrix(int order, int** matrix);

int main(void) {
    int size;
    printf("Insira o tamanho dos arrays X e Y: ");
    scanf("%d", &size);

    int n;
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    int* x = (int*)malloc(size * sizeof(int));
    int* y = (int*)malloc(size * sizeof(int));
    int* r = (int*)malloc(size * sizeof(int));
    if (!x || !y || !r) {
        puts("Erro ao alocar memória");
        exit(1);
    }

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        x[i] = rand() % n;
        r[i] = rand() % 11;

        if (r[i] <= 3) y[i] = x[i];
        else if (r[i] > 3 && r[i] <= 5) y[i] = x[i] - 1;
        else if (r[i] > 5 && r[i] <= 7) y[i] = x[i] + 1;
        else if (r[i] > 8 && r[i] <= 9) y[i] = x[i] - 2;
        else if (r[i] > 9 && r[i] <= 10) y[i] = x[i] + 2;

        if (y[i] < 0) y[i] = 0;
        if (y[i] >= n) y[i] = n - 1;
    }

    int** m = getZeroSquareMatrix(n);
    for (int i = 0; i < n; i++) {
        if (x[i] < n && y[i] < n) {
            m[x[i]][y[i]]++;
        }
    }
    
    displayArray("\nX: ", size, x);
    displayArray("Y: ", size, y);
    displayArray("R: ", size, r);
    displaySquareMatrix("M: ", n, m);

    free(x);
    free(y);
    freeSquareMatrix(n, m);

    return 0;
}

int** getZeroSquareMatrix(int order) {
    int** matrix = (int**)malloc(order * sizeof(int*));
    if (!matrix) {
        puts("Erro ao alocar memória");
        exit(1);
    }

    for (int i = 0; i < order; i++) {
        matrix[i] = (int*)calloc(order, sizeof(int));
        if (!matrix[i]) {
            puts("Erro ao alocar memória");
            exit(1);
        }        
    }

    return matrix;
}

void displayArray(const char* text, int size, const int* array) {
    printf("%s", text);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

void displaySquareMatrix(const char* text, int order, int** matrix) {
    printf("\n%s\n", text);
    for (int i = 0; i < order; i++) {
        displayArray("", order, matrix[i]);
    }
}

void freeSquareMatrix(int order, int** matrix) {
    for (int i = 0; i < order; i++) {
        free(matrix[i]);
    }

    free(matrix);
}
