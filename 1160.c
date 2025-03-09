#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int PA, PB;
        double G1, G2;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        int years = 0;
        while (PA <= PB) {
            PA += (int)(PA * (G1 / 100));
            PB += (int)(PB * (G2 / 100));
            years++;
            if (years > 100) {
                break;
            }
        }

        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}

