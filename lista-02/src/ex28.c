#include <stdio.h>

int main(void) {
    unsigned char x, y;
    printf("Insira os valores de x e y no formato (x y): ");
    scanf("%hhu %hhu", &x, &y);

    if (y < 5) {
        printf("O valor de y deve ser maior ou igual a 5\n");
        return 1;
    }

    int pos = 0;
    for (int currentY = y + 4; currentY >= y - 4; currentY--) {
        if (y == currentY) {
            continue;
        }
        
        unsigned char mask = 0x01 << pos;
        unsigned char result = (x & mask) | (currentY & ~mask);
        printf("y%+d: %#x->%#x\n", currentY - y, currentY, result);
        pos++;
    }

    return 0;
}
