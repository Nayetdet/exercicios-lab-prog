#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getNumBits(int n) {
    if (n == 0)
        return 1;
    return (int)log2(n) + 1;
}

char* toBin(unsigned int n) {
    int numBits = getNumBits(n);
    char* bin = (char*)malloc((numBits + 1) * sizeof(char));
    if (bin == NULL) {
        return NULL;
    }

    for (int i = numBits - 1; i >= 0; i--) {
        char bit = ((n >> i) & 0x01) ? '1' : '0';
        bin[numBits - i - 1] = bit;
    }

    bin[numBits] = '\0';
    return bin;
}

int main(void) {
    for (int i = 0; i <= 10; i++) {
        printf("Numero: %d\n", i);
        
        char* bin = toBin(i);
        printf("Binario: %s\n", bin);
        free(bin);

        printf("Octal: %#o\n", i);
        printf("Hexadecimal: %#x\n\n", i);
    }

    return 0;
}
