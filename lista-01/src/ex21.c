#include <stdio.h>

int main(void) {
    char caracteres[] = "ABCabc012$*+/ ";
    int numCaracteres = sizeof(caracteres) / sizeof(caracteres[0]);

    for (int i = 0; i < numCaracteres; i++) {
        char caractere = caracteres[i];
        int numeroCorrespondente = (int) caractere;
        printf("Caractere: '%c', Numero correspondente: %d\n", caractere,numeroCorrespondente);
    }

    return 0;
}
