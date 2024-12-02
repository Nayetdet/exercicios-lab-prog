#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** createRandomMatrix(int rows, int columns);
void displayMatrix(const char* text, int rows, int columns, int** matrix);
int countTargetOccurrences(int target, int rows, int columns, int** matrix);
void freeMatrix(int rows, int** matrix);

int main(void) {
    int rows;
    int columns;
    printf("Insira a quantidade de linhas e colunas da matriz: ");
    scanf("%d %d", &rows, &columns);

    int** matrix = createRandomMatrix(rows, columns);
    displayMatrix("\nMatriz:", rows, columns, matrix);

    int target;
    printf("\nInsira um valor: ");
    scanf("%d", &target);

    int occurrences = countTargetOccurrences(target, rows, columns, matrix);
    printf("\nQuantidade de vezes que o valor inserido aparece: %d\n", occurrences);

    freeMatrix(rows, matrix);
    return 0;
}

int** createRandomMatrix(int rows, int columns) {
    int** matrix = (int**)malloc(sizeof(int*) * rows);
    if (matrix == NULL) {
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(sizeof(int) * columns);
        if (matrix[i] == NULL) {
            // Libera os elementos que já foram alocados anteriormente
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }

            free(matrix);
            return NULL;
        }

        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    return matrix;
}

void displayMatrix(const char* text, int rows, int columns, int** matrix) {
    puts(text);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}

int countTargetOccurrences(int target, int rows, int columns, int** matrix) {
    int occurrences = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == target) {
                occurrences++;
            }
        }
    }

    return occurrences;
}

void freeMatrix(int rows, int** matrix) {
    if (matrix == NULL) {
        return;
    }

    for (int i = 0; i < rows; i++) {
        if (matrix[i] != NULL) {
            free(matrix[i]);
        }
    }

    free(matrix);
}
