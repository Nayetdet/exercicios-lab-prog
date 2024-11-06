#ifndef ARMARIOS_H
#define ARMARIOS_H

#include <stdbool.h>

bool armariosEstaoCheios(unsigned char* armarios);
bool armarioEstaOcupado(unsigned char* armarios, unsigned char posicao);
unsigned char escolherArmario(unsigned char* armarios);
void ocuparArmario(unsigned char* armarios);
void liberarArmario(unsigned char* armarios);

#endif
