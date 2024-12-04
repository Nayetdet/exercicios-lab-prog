#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pgm.h"

PGMImage* readPGMImage(const char* path) {
    FILE* fp = fopen(path, "rb");
    if (!fp) {
        fprintf(stderr, "Erro: Nao foi possivel abrir o arquivo\n");
        return NULL;
    }

    char format[3];
    if (fscanf(fp, "%2c\n", format) != 1 || strcmp(format, "P5") != 0) {
        fprintf(stderr, "Erro: Formato de arquivo invalido ou nao suportado\n");
        fclose(fp);
        return NULL;
    }

    PGMImage* pgm = (PGMImage*)malloc(sizeof(PGMImage));
    if (!pgm) {
        fprintf(stderr, "Erro: Falha ao alocar memoria para a imagem PGM\n");
        fclose(fp);
        return NULL;
    }

    char ch;
    while ((ch = fgetc(fp)) == '#') {
        while ((ch = fgetc(fp)) != '\n' && ch != EOF);
    }

    ungetc(ch, fp);
    if (fscanf(fp, "%d %d %d", &pgm->width, &pgm->height, &pgm->maxPixel) != 3) {
        fprintf(stderr, "Erro: Falha ao ler as dimensoes ou o valor maximo de pixel da imagem PGM\n");
        cleanupOnError(fp, pgm);
        return NULL;
    }

    fgetc(fp);
    if (pgm->width <= 0 || pgm->height <= 0 || pgm->maxPixel <= 0 || pgm->maxPixel >= 256) {
        fprintf(stderr, "Erro: Valores invalidos para largura, altura ou valor maximo de pixel da imagem PGM\n");
        cleanupOnError(fp, pgm);
        return NULL;
    }

    pgm->pixels = (unsigned char**)malloc(pgm->height * sizeof(unsigned char*));
    if (!pgm->pixels) {
        fprintf(stderr, "Erro: Falha ao alocar memoria para os pixeis da imagem PGM\n");
        cleanupOnError(fp, pgm);
        return NULL;
    }

    for (int i = 0; i < pgm->height; i++) {
        pgm->pixels[i] = (unsigned char*)malloc(pgm->width * sizeof(unsigned char));
        if (!pgm->pixels[i]) {
            fprintf(stderr, "Erro: Falha ao alocar memoria para a linha %d da imagem PGM\n", i);
            cleanupOnError(fp, pgm);
            return NULL;
        }

        if (fread(pgm->pixels[i], sizeof(unsigned char), pgm->width, fp) != pgm->width) {
            fprintf(stderr, "Erro: Falha ao ler os dados da linha %d da imagem PGM\n", i);
            cleanupOnError(fp, pgm);
            return NULL;
        }
    }

    fclose(fp);
    return pgm;
}

void cleanupOnError(FILE* fp, PGMImage* pgm) {
    if (fp) {
        fclose(fp);  
    };

    freePGMImage(pgm);
}

void freePGMImage(PGMImage* pgm) {
    if (!pgm) {
        return;
    };

    if (pgm->pixels) {
        for (int i = 0; i < pgm->height; i++) {
            free(pgm->pixels[i]);
        }
        
        free(pgm->pixels);
    }

    free(pgm);
}
