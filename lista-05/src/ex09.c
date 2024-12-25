#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void populateArray(int size, int minValue, int maxValue, int* array);
void displayArray(int size, const int* array);
void bubbleSort(int size, int* array);
void swap(int* pX, int* pY);

int main(void) {
    int size;
    printf("Insira o tamanho do array: ");
    scanf("%d", &size);
    
    int* array = (int*)malloc(size * sizeof(int));
    if (!array) {
        puts("Erro ao alocar memória para o array");
        exit(1);
    }

    populateArray(size, 0, 100, array);
    puts("\nArray Original:");
    displayArray(size, array);

    bubbleSort(size, array);
    puts("\nArray Ordenado:");
    displayArray(size, array);

    free(array);

    return 0;
}

void populateArray(int size, int minValue, int maxValue, int* array) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = minValue + rand() % (maxValue - minValue + 1);
    }
}

void displayArray(int size, const int* array) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

void bubbleSort(int size, int* array) {
    for (int i = 0; i < size - 1; i++) {
        bool hasSwapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                hasSwapped = true;
            }
        }

        if (!hasSwapped) {
            break;
        }
    }
}

void swap(int* pX, int* pY) {
    int tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}
