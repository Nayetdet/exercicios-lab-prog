#include <stdio.h>
#include <limits.h>

int main(void) {
    int value;
    int minValue = INT_MAX;

    int* pValue = &value;
    int* pMinValue = &minValue;
    
    do {
        printf("Insira um valor: ");
        scanf("%d", pValue);

        if (*pValue && *pValue < *pMinValue) {
            *pMinValue = *pValue;
        }
    } while (*pValue);
    
    if (minValue == INT_MAX) {
        puts("\nNenhum valor válido foi fornecido");
    } else {
        printf("\nMenor valor fornecido: %d\n", minValue);
    }

    return 0;
}
