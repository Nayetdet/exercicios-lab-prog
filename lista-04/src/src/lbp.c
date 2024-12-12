#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lbp.h"
#include "pgm.h"

LBPImage* getLBPImage(PGMImage* pgm) {
    if (!pgm || !pgm->pixels) {
        fprintf(stderr, "Erro: Imagem de entrada invalida\n");
        return NULL;
    }

    LBPImage* lbp = (LBPImage*)malloc(sizeof(LBPImage));
    if (!lbp) {
        fprintf(stderr, "Erro: Falha ao alocar memoria para a imagem LBP\n");
        return NULL;
    }

    lbp->pixels = (unsigned char**)malloc(pgm->height * sizeof(unsigned char*));
    if (!lbp->pixels) {
        fprintf(stderr, "Erro: Falha ao alocar memoria para os pixeis da imagem LBP\n");
        freeLBPImage(lbp);
        return NULL;
    }

    for (int i = 0; i < pgm->height; i++) {
        lbp->pixels[i] = (unsigned char*)malloc(pgm->width * sizeof(unsigned char));
        if (!lbp->pixels[i]) {
            fprintf(stderr, "Erro: Falha ao alocar memoria para a linha %d da imagem LBP\n", i);
            freeLBPImage(lbp);
            return NULL;
        }
    }

    lbp->width = pgm->width;
    lbp->height = pgm->height;

    for (int i = 0; i < pgm->height; i++) {
        for (int j = 0; j < pgm->width; j++) {
            lbp->pixels[i][j] = getLBPPattern(pgm, i, j);
        }
    }

    return lbp;
}

unsigned char getLBPPattern(PGMImage* pgm, int row, int column) {
    static const int offsets[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}
    };

    unsigned char center = pgm->pixels[row][column];
    unsigned char pattern = 0x00;

    for (int i = 0; i < 8; i++) {
        int neighborRow = row + offsets[i][0];
        int neighborColumn = column + offsets[i][1];

        if (!isPositionWithinPGMImageBounds(pgm, neighborRow, neighborColumn)) {
            continue;
        }

        if (pgm->pixels[neighborRow][neighborColumn] >= center) {
            pattern |= 0x01 << i;
        }
    }
    
    return pattern;
}

void freeLBPImage(LBPImage* lbp) {
    if (!lbp) {
        return;
    }

    if (lbp->pixels) {
        for (int i = 0; i < lbp->height; i++) {
            free(lbp->pixels[i]);
        }

        free(lbp->pixels);
    }

    free(lbp);
}
