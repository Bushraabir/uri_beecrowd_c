#include <stdio.h>

int main() {
    int inter, gremio, inter_wins = 0, gremio_wins = 0, draws = 0, grenais = 0, choice;
    while(1) {
        scanf("%d %d", &inter, &gremio);
        grenais++;
        if(inter > gremio) inter_wins++;
        else if(gremio > inter) gremio_wins++;
        else draws++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &choice);
        if(choice == 2) break;
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter_wins);
    printf("Gremio:%d\n", gremio_wins);
    printf("Empates:%d\n", draws);
    if(inter_wins > gremio_wins) printf("Inter venceu mais\n");
    else if(gremio_wins > inter_wins) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}
