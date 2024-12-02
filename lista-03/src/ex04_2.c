#include <stdio.h>
#include <string.h>

#define TAM 100

int main(void) {
    char str1[TAM];
    printf("Insira um texto: ");
    fgets(str1, TAM, stdin);

    char str2[TAM];
    printf("Insira outro texto: ");
    fgets(str2, TAM, stdin);

    if (!strcmp(str1, str2)) puts("Os dois textos sao iguais");
    else puts("Os dois textos nao sao iguais");
    return 0;
}
