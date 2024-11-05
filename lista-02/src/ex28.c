#include <stdio.h>

int main(void) {
    unsigned char x, y;
    printf("Insira os valores de x e y no formato (x y): ");
    scanf("%hhu %hhu", &x, &y);

    if (y < 5) {
        printf("O valor de y deve ser maior ou igual a 5\n");
        return 1;
    }

    for (signed char offset = 4; offset >= -4; offset--) {
        if (!offset) {
            continue;
        }

        unsigned char mask = (x >> (offset + 4)) & 0x01;
        unsigned char currentY = y + offset;
        unsigned char result = (currentY & 0xFE) | mask;
        printf("y%+d: %#x->%#x\n", offset, currentY, result);    
    }
    
    return 0;
}
