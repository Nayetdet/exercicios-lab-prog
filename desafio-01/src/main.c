#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "armarios.h"

typedef enum {
    OCUPAR_ARMARIO = 1,
    LIBERAR_ARMARIO = 2,
    SAIR = 3
} OpcaoMenu;

void exibirMenu(void) {
    puts("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
    puts("|G|e|r|e|n|c|i|a|d|o|r| |d|e| |A|r|m|a|r|i|o|s|");
    puts("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
    puts("1. Ocupar armario");
    puts("2. Liberar armario");
    puts("3. Sair");
}

int main(void) {
    srand(time(NULL));

    unsigned char armarios = 0x00;
    unsigned char opcao;

    exibirMenu();

    do {
        printf("\n>> Escolha uma opcao: ");
        scanf("%hhu", &opcao);

        switch (opcao) {
            case OCUPAR_ARMARIO:
                ocuparArmario(&armarios);
                break;
            case LIBERAR_ARMARIO:
                liberarArmario(&armarios);
                break;
            case SAIR:
                puts("Saindo...");
                continue;
            default:
                puts("Opcao invalida! Escolha entre 1, 2 e 3");
                break;
        }

        printf("Estado atual dos armarios: %#x\n", armarios);
    } while (opcao != SAIR);

    return 0;
}
