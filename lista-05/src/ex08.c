#include <stdio.h>

#define MAXSIZE 100

int searchStr(char target, const char* source);

int main(void) {
    char source[MAXSIZE];
    char target;

    printf("Insira um texto: ");
    fgets(source, MAXSIZE, stdin);

    printf("\nInsira o caractere a ser procurado: ");
    scanf(" %c", &target);

    if (searchStr(target, source)) {
        printf("\nO caractere '%c' foi encontrado no texto\n", target);
    } else {
        printf("\nO caractere '%c' não foi encontrado no texto\n", target);
    }
    
    return 0;
}

int searchStr(char target, const char* source) {
    while (*source != '\0') {
        if (*source == target) {
            return 1;
        }
        
        source++;
    }
    
    return 0;
}
