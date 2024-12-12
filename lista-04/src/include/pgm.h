#ifndef PGM_H
#define PGM_H

#include <stdbool.h>

typedef struct {
    int width;
    int height;
    int maxPixel;
    unsigned char** pixels;
} PGMImage;

PGMImage* getPGMImage(const char* path);
bool isPositionWithinPGMImageBounds(PGMImage* pgm, int row, int column);
void freePGMImage(PGMImage* pgm);

#endif
