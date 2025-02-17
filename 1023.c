#include <stdio.h>
#include <math.h>

int main() {
    int n, testCase = 0;
    while (scanf("%d", &n) == 1 && n) {
        testCase++;
        int groups[201] = {0}, totalPeople = 0, totalConsumption = 0;
        for (int i = 0; i < n; i++) {
            int residents, consumption;
            scanf("%d %d", &residents, &consumption);
            int rate = consumption / residents;
            groups[rate] += residents;
            totalPeople += residents;
            totalConsumption += consumption;
        }
        if (testCase > 1)
            printf("\n");
        printf("Cidade# %d:\n", testCase);
        int first = 1;
        for (int rate = 0; rate <= 200; rate++) {
            if (groups[rate] > 0) {
                if (!first)
                    printf(" ");
                first = 0;
                printf("%d-%d", groups[rate], rate);
            }
        }
        double avg = (double)totalConsumption / totalPeople;
        int truncInt = (int)(avg * 100);
        printf("\nConsumo medio: %.2f m3.\n", truncInt / 100.0);
    }
    return 0;
}
