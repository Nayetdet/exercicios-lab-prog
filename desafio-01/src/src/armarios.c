#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "armarios.h"

bool armariosEstaoCheios(unsigned char* armarios) {
    return *armarios == 0xFF;
}

bool armarioEstaOcupado(unsigned char* armarios, unsigned char posicao) {
    return (*armarios >> posicao) & 0x01;
}

unsigned char escolherArmario(unsigned char* armarios) {
    unsigned char posicao;
    do {
        posicao = rand() % 8;
    } while (armarioEstaOcupado(armarios, posicao));
    return posicao;
}

void ocuparArmario(unsigned char* armarios) {
    if (armariosEstaoCheios(armarios)) {
        puts("Erro: Todos os armarios ja estao ocupados");
        return;
    }

    unsigned char posicao = escolherArmario(armarios);
    *armarios |= (1 << posicao);

    printf("O armario de posicao %hhu foi ocupado\n", posicao);
}

void liberarArmario(unsigned char* armarios) {
    unsigned char posicao;
    printf(">>>> Insira a posicao do armario a ser desocupado (0 a 7): ");
    scanf("%hhu", &posicao);

    if (posicao < 0 || posicao > 7) {
        puts("Erro: Posicao invalida");
        return;
    }

    if (!armarioEstaOcupado(armarios, posicao)) {
        puts("Erro: O armario escolhido ja esta desocupado");
        return;
    }

    *armarios &= ~(1 << posicao);
}
