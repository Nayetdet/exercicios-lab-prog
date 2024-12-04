#include <stdio.h>

#include "lbp.h"
#include "pgm.h"

int main(void) {
    PGMImage* pgm = readPGMImage("assets/cat.pgm");
    if (!pgm) {
        return 1;
    }

    LBPImage* lbp = calculateLBPImage(pgm);
    if (!lbp) {
        return 1;
    }

    unsigned char histogram[256] = {0};
    for (int i = 0; i < lbp->height; i++) {
        for (int j = 0; j < lbp->width; j++) {
            histogram[lbp->pixels[i][j]]++;
        }
    }

    puts("Histograma:");
    for (int i = 0; i < 256; i++) {
        printf("%03hhu ", histogram[i]);
    }

    freePGMImage(pgm);
    freeLBPImage(lbp);
    return 0;
}
