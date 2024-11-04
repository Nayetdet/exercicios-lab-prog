#include <stdio.h>

int main(void) {
    int valor = 1;
    
    while (valor != 0) {
        printf("Insira um número correspondente a um dia da semana (1-7): ");
        scanf("%d", &valor);

        switch (valor) {
            case 0:
                break;
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-feira\n");
                break;
            case 3:
                printf("Terça-feira\n");
                break;
            case 4:
                printf("Quarta-feira\n");
                break;
            case 5:
                printf("Quinta-feira\n");
                break;
            case 6:
                printf("Sexta-feira\n");
                break;
            case 7:
                printf("Sábado\n");
                break;
            default:
                printf("Numero de dia nao valido\n");
                break;
        }
    }
    
    return 0;
}
