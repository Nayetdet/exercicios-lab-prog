#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "armarios.h"
#include "utils.h"

int main(void) {
    srand(time(NULL));
    exibirMenu();

    unsigned char armarios = 0x00;
    unsigned char opcao;

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
