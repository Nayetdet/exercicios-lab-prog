#include <stdio.h>

#define MAXSIZE 100

int strLen(const char* source);

int main(void) {
    char str[MAXSIZE];
    printf("Insira um texto: ");
    fgets(str, MAXSIZE, stdin);
    
    printf("\nTamanho do texto: %d\n", strLen(str));

    return 0;
}

int strLen(const char* source) {
    int i = 0;
    while (*(source + i) != '\0') {
        i++;
    }

    return i;
}
