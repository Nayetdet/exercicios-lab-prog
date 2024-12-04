#ifndef LBP_H
#define LBP_H

#include "pgm.h"

typedef struct {
    int width;
    int height;
    unsigned char** pixels;
} LBPImage;

LBPImage* calculateLBPImage(PGMImage* pgm);
void freeLBPImage(LBPImage* lbp);

#endif
