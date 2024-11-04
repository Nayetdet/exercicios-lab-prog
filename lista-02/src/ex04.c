#include <stdio.h>

#define TAXA_CRESCIMENTO_JOSE 2
#define TAXA_CRESCIMENTO_PEDRO 3

int main(void) {
    int alturaJose = 150;
    int alturaPedro = 110;

    int tempo = 0;
    while (alturaJose < alturaPedro) {
        alturaJose += TAXA_CRESCIMENTO_JOSE;
        alturaPedro += TAXA_CRESCIMENTO_PEDRO;
        tempo++;
    }

    printf("Jose ira ultrapassar a altura de Pedro em %d anos\n", tempo);
    return 0;
}
