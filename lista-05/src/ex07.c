#include <stdio.h>

#define MAXSIZE 100

void strConcat(char* destiny, const char* source);

int main(void) {
    char source[MAXSIZE];
    char destiny[MAXSIZE];

    printf("Insira um texto: ");
    fgets(destiny, MAXSIZE, stdin);

    printf("Insira outro texto: ");
    fgets(source, MAXSIZE, stdin);

    strConcat(destiny, source);
    printf("Texto concatenado: %s\n", destiny);

    return 0;
}

void strConcat(char* destiny, const char* source) {
    while (*destiny != '\0') {
        destiny++;
    }

    while (*source != '\0') {
        *destiny++ = *source++;
    }

    *destiny = '\0';
}
