#ifndef LBP_H
#define LBP_H

#include "pgm.h"

typedef struct {
    int width;
    int height;
    unsigned char** pixels;
} LBPImage;

LBPImage* getLBPImage(PGMImage* pgm);
unsigned char getLBPPattern(PGMImage* pgm, int row, int column);
void freeLBPImage(LBPImage* lbp);

#endif
