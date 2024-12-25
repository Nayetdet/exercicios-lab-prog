#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* getRandomArray(int size, int maxValue);
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

    int* x = getRandomArray(size, n);
    int* y = getRandomArray(size, n);
    int** m = getZeroSquareMatrix(n);

    for (int i = 0; i < n; i++) {
        if (x[i] < n && y[i] < n) {
            m[x[i]][y[i]]++;
        }
    }
    
    displayArray("\nX: ", size, x);
    displayArray("Y: ", size, y);
    displaySquareMatrix("M: ", n, m);

    free(x);
    free(y);
    freeSquareMatrix(n, m);

    return 0;
}

int* getRandomArray(int size, int maxValue) {
    int* array = (int*)malloc(size * sizeof(int));
    if (!array) {
        puts("Erro ao alocar memória");
        exit(1);
    }
    
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % maxValue;
    }

    return array;
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
