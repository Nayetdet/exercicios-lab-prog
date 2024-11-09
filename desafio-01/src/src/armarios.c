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

char escolherArmario(unsigned char* armarios) {
    char posicao;
    do {
        if (armariosEstaoCheios(armarios))
            return -1;
        posicao = rand() % 8;
    } while (armarioEstaOcupado(armarios, posicao));
    return posicao;
}

void ocuparArmario(unsigned char* armarios) {
    char posicao = escolherArmario(armarios);
    if (posicao < 0) {
        puts("Erro: Todos os armarios ja estao ocupados");
        return;
    }

    *armarios |= (1 << posicao);
    printf("O armario de posicao %hhd foi ocupado\n", posicao);
}

void liberarArmario(unsigned char* armarios) {
    char posicao;
    printf(">>>> Insira a posicao do armario a ser desocupado (0 a 7): ");
    scanf("%hhd", &posicao);

    if (posicao < 0 || posicao > 7) {
        puts("Erro: Posicao invalida");
        return;
    }

    if (!armarioEstaOcupado(armarios, posicao)) {
        puts("Erro: O armario escolhido ja esta desocupado");
        return;
    }

    *armarios &= ~(1 << posicao);
    printf("O armario de posicao %hhd foi desocupado\n", posicao);
}
