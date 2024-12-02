#include <stdio.h>
#include <stdbool.h>

#define TAM 100

bool contains(int size, char* buffer, char target);

int main(void) {
    char buffer[TAM];
    char target;

    printf("Insira um texto: ");
    fgets(buffer, TAM, stdin);
    
    printf("Insira um caractere: ");
    scanf(" %c", &target);

    if (contains(TAM, buffer, target)) puts("O texto contem o caractere solicitado");
    else puts("O texto nao contem o caractere solicitado");

    return 0;
}

bool contains(int size, char* buffer, char target) {
    for (int i = 0; i < size; i++) {
        if (buffer[i] == target) {
            return true;
        }
    }

    return false;
}
