#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

unsigned char armarios = 0x00;

bool armarioEstaCheio() {
    return armarios == 0xFF;
}

unsigned char escolherArmario() {
    unsigned char posicao;
    do {
        posicao = rand() % 8;
    } while ((armarios >> posicao) & 0x01);
    return posicao;
}

void ocuparArmario() {
    if (armarioEstaCheio()) {
        printf("Erro: Todos os armarios ja estao ocupados\n");
        return;
    }

    unsigned char posicao = escolherArmario();
    armarios |= (1 << posicao);
}

void liberarArmario() {
    unsigned char posicao;
    printf("Insira a posicao do armario a ser desocupado: ");
    scanf("%hhu", &posicao);

    if (posicao < 0 || posicao > 7) {
        printf("Erro: Posicao invalida\n");
        return;
    }

    armarios &= ~(1 << posicao);
}

int main(void) {
    srand(time(0));

    printf("Menu de Gerenciamento de Armarios:\n");
    printf("1. Ocupar armario\n");
    printf("2. Liberar armario\n");
    printf("3. Sair\n");

    unsigned char opcao;
    do {
        printf("Escolha uma opcao: ");
        scanf("%hhu", &opcao);

        switch (opcao) {
            case 1:
                ocuparArmario();
                break;
            case 2:
                liberarArmario();
                break;
        }

        printf("Estado atual dos armarios: %#x\n", armarios);
    } while (opcao != 3);
    return 0;
}
