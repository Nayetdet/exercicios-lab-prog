#include <stdio.h>
#include <string.h>

#define TAM1 20
#define TAM2 100

int main(void) {
    char str1[TAM1];
    printf("Insira um texto: ");
    fgets(str1, TAM1, stdin);

    char str2[TAM2];
    printf("Insira outro texto: ");
    fgets(str2, TAM2, stdin);

    puts("Essas duas strings concatenadas resultam em:");
    printf("%s", strcat(str1, str2));

    return 0;
}
