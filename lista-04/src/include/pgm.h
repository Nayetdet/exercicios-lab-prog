#ifndef PGM_H
#define PGM_H

typedef struct {
    int width;
    int height;
    int maxPixel;
    unsigned char** pixels;
} PGMImage;

PGMImage* readPGMImage(const char* path);
void freePGMImage(PGMImage* pgm);
void cleanupOnError(FILE* fp, PGMImage* pgm);

#endif
