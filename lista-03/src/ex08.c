#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int* createRandomArray(int size);
int* copyArray(int size, int* array);
void displayArray(const char* text, int size, int* array);
int* selectionSort(int size, int* array);
int* bubbleSort(int size, int* array);

int main(void) {
    int size = 100;
    int* array = createRandomArray(size); 
    displayArray("Array original:", size, array);

    int* arraySelectionSort = selectionSort(size, array);
    displayArray("\nArray ordenado por selecao:", size, arraySelectionSort);

    int* arrayBubbleSort = bubbleSort(size, array);
    displayArray("\nArray ordenado pelo metodo bolha:", size, arrayBubbleSort);

    free(array);
    free(arraySelectionSort);
    free(arrayBubbleSort);
    return 0;
}

int* createRandomArray(int size) {
    int* array = (int*)malloc(sizeof(int) * size);
    if (array == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++){
        array[i] = rand() % 100;
    }

    return array;
}

int* copyArray(int size, int* array) {
    int* arrayCopy = (int*)malloc(sizeof(int) * size);
    if (arrayCopy == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        arrayCopy[i] = array[i];
    }

    return arrayCopy;
}

void displayArray(const char* text, int size, int* array) {
    puts(text);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int* selectionSort(int size, int* array) {
    int* arrayCopy = copyArray(size, array);

    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arrayCopy[j] < arrayCopy[minIdx]) {
                minIdx = j;
            }
        }

        int tmp = arrayCopy[i];
        arrayCopy[i] = arrayCopy[minIdx];
        arrayCopy[minIdx] = tmp;
    }

    return arrayCopy;
}

int* bubbleSort(int size, int* array) {
    int* arrayCopy = copyArray(size, array);

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arrayCopy[j] > arrayCopy[j + 1]) {
                int tmp = arrayCopy[j];
                arrayCopy[j] = arrayCopy[j + 1];
                arrayCopy[j + 1] = tmp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    return arrayCopy;
}