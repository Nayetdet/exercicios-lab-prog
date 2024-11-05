#include <stdio.h>

char* binStr(unsigned char n) {
    static unsigned char bin[9];
    for (unsigned char i = 0; i < 8; i++) {
        bin[i] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }

    bin[8] = '\0';
    return bin;
}

int main(void) {
    for (int i = 0; i < 256; i++) {
        printf("Numero: %d\n", i);
        printf("Valor binario: %s\n", binStr(i));
        printf("Valor octal: %#o\n", i);
        printf("Valor hexadecimal: %#x\n\n", i);
    }

    return 0;
}
