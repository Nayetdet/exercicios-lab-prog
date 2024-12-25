#include <stdio.h>

void swap(int* pX, int* pY);
void display(const char* text, int* pX, int* pY);

int main(void) {
    int x;
    int y;
    
    printf("Insira os valores de x e de y: ");
    scanf("%d %d", &x, &y);

    display("Antes da troca:", &x, &y);
    swap(&x, &y);
    display("Após a troca:", &x, &y);

    return 0;
}

void swap(int* pX, int* pY) {
    int tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}

void display(const char* text, int* pX, int* pY) {
    printf("\n%s\n", text);
    printf("X: [%p] %d\n", pX, *pX);
    printf("Y: [%p] %d\n", pY, *pY);
}
