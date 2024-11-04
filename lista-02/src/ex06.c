#include <stdio.h>

int main(void) {
    int voto;

    int numVotos = 0;
    int numVotosBrancos = 0;
    int numVotosPaulo = 0;
    int numVotosRenata = 0;
    int numVotosNulos = 0;
    
    do {
        printf("Insira um valor na urna: ");
        scanf("%d", &voto);

        if (voto < 0) {
            continue;
        }

        switch (voto) {
            case 0:
                numVotosBrancos++;
                break;
            case 5:
                numVotosPaulo++;
                break;
            case 7:
                numVotosRenata++;
                break;
            default:
                numVotosNulos++;
                break;
        }

        numVotos++;
    } while (voto >= 0);

    float porcentagemVotacoesPaulo = 100 * (float)numVotosPaulo / numVotos;
    float porcentagemVotacoesRenata = 100 * (float)numVotosRenata / numVotos;

    printf("\nPorcentagem de votacoes do Paulo: %.2f%%\n", porcentagemVotacoesPaulo);
    printf("Porcentagem de votacoes da Renata: %.2f%%\n", porcentagemVotacoesRenata);

    return 0;
}
