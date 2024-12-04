#include <stdio.h>
#include <stdlib.h>

#include "lbp.h"
#include "pgm.h"

LBPImage* calculateLBPImage(PGMImage* pgm) {
    static int offsets[8][2] = {
        {-1, -1}, {0, -1}, {1, -1},
        {-1,  0},          {1,  0},
        {-1,  1}, {0,  1}, {1,  1}
    };

    if (!pgm) {
        return NULL;
    }

    LBPImage* lbp = (LBPImage*)malloc(sizeof(LBPImage));
    if (!lbp) {
        fprintf(stderr, "Erro: Falha ao alocar memoria para a imagem LBP\n");
        return NULL;
    }

    lbp->width = pgm->width;
    lbp->height = pgm->height;

    lbp->pixels = (unsigned char**)malloc(lbp->height * sizeof(unsigned char*));
    if (!lbp->pixels) {
        fprintf(stderr, "Erro: Falha ao alocar memoria para os pixeis da imagem LBP\n");
        freeLBPImage(lbp);
        return NULL;
    }

    for (int i = 0; i < lbp->height; i++) {
        lbp->pixels[i] = (unsigned char*)malloc(lbp->width * sizeof(unsigned char));
        if (!lbp->pixels[i]) {
            fprintf(stderr, "Erro: Falha ao alocar memoria para a linha %d da imagem LBP\n", i);
            freeLBPImage(lbp);
            return NULL;
        }
    }

    for (int i = 1; i < pgm->height - 1; i++) {
        for (int j = 1; j < pgm->width - 1; j++) {
            unsigned char center = pgm->pixels[i][j];
            unsigned char bin = 0x00;

            for (int k = 0; k < 8; k++) {
                if (pgm->pixels[i + offsets[k][0]][j + offsets[k][1]] >= center) {
                    bin |= (1 << (7 - k));
                }
            }

            lbp->pixels[i][j] = bin;
        }
    }

    return lbp;
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
