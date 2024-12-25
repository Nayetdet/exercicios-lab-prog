#include <stdio.h>

#define MAXSIZE 100

void strCopy(char* destiny, const char* source);

int main(void) {
    char source[MAXSIZE];
    char destiny[MAXSIZE];

    printf("Insira um texto: ");
    fgets(source, MAXSIZE, stdin);

    strCopy(source, destiny);

    printf("\nTexto original: %s\n", source);
    printf("Texto copiado: %s\n", destiny);
    
    return 0;
}

void strCopy(char* destiny, const char* source) {
    while (*source != '\0') {
        *destiny++ = *source++;
    }

    *destiny = '\0';
}
