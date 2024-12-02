#include <stdio.h>

#define TAM1 20
#define TAM2 100

int len(char* buffer);
void cat(char* destiny, char* source);

int main(void) {
    char destiny[TAM1];
    printf("Insira um texto: ");
    fgets(destiny, TAM1, stdin);

    char source[TAM2];
    printf("Insira outro texto: ");
    fgets(source, TAM2, stdin);

    cat(destiny, source);
    puts("Essas duas strings concatenadas resultam em:");
    printf("%s", destiny);
    
    return 0;
}

int len(char* buffer) {
    int i = 0;
    while (buffer[i] != '\0') {
        i++;
    }
    
    return i;
}

void cat(char* destiny, char* source) {
    int lenSource = len(source);
    int lenDestiny = len(destiny);

    for (int i = 0; i < lenSource; i++)
        destiny[lenDestiny + i] = source[i];
    destiny[lenDestiny + lenSource] = '\0';    
}
