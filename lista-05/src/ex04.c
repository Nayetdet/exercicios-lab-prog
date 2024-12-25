#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;
    printf("Insira o tamanho do array: ");
    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));
    if (!array) {
        puts("Erro ao alocar memória para o array");
        exit(1);
    }

    puts("\nInsira os valores:");
    for (int i = 0; i < size; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    puts("\nValores do array e seus respectivos endereços na memória:");
    for (int i = 0; i < size; i++) {
        printf("array[%d]: [%p] %d\n", i, &array[i], array[i]);
    }

    printf("\n");
    free(array);

    return 0;
}
