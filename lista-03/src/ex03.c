#include <stdio.h>

#define TAM 100

int len(char* buffer);

int main(void) {
    char buffer[TAM];

    printf("Insira um texto: ");
    fgets(buffer, TAM, stdin);

    printf("Quantidade de caracteres: %d\n", len(buffer));
    return 0;
}

int len(char* buffer) {
    int i = 0;
    while (buffer[i] != '\0') {
        i++;
    }
    
    return i;
}
