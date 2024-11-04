#include <stdio.h>
#include <math.h>

#define LIMITE 500

int main(void) {
    for (int cateto1 = 1; cateto1 <= LIMITE; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= LIMITE; cateto2++) {
            double hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
            if (hipotenusa == (int)hipotenusa) {
                printf("(%d, %d, %d)\n", cateto1, cateto2, (int)hipotenusa);
            }
        }
    }

    return 0;
}
