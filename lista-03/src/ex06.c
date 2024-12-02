#include <stdio.h>

#define TAM 100

int len(char* buffer);
void reverse(char* buffer);

int main(void) {
    char buffer[TAM];
    printf("Insira um texto: ");
    fgets(buffer, TAM, stdin);

    reverse(buffer);
    puts("Texto invertido:");
    printf("%s\n", buffer);

    return 0;
}

int len(char* buffer) {
    int i = 0;
    while (buffer[i] != '\0') {
        i++;
    }
    
    return i;
}

void reverse(char* buffer) {
    int size = len(buffer);
    for (int i = 0; i < size / 2; i++) {
        char tmp = buffer[i];
        buffer[i] = buffer[size - i - 1];
        buffer[size - i - 1] = tmp;
    }
}
