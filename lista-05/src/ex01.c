#include <stdio.h>

int main(void) {
    int x;
    int y;

    int* pX = &x;
    int* pY = &y;

    printf("Insira os valores de x e de y: ");
    scanf("%d %d", pX, pY);

    int soma = *pX + *pY;
    int* pSoma = &soma;

    printf("[%p] %d + [%p] %d = [%p] %d\n", pX, *pX, pY, *pY, pSoma, *pSoma);    
    
    return 0;
}
