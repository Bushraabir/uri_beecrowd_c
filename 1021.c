#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);
    int total_cents = (int)(N * 100.0 + 0.5);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = total_cents / notes[i];
        printf("%d nota(s) de R$ %d.00\n", count, notes[i] / 100);
        total_cents %= notes[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = total_cents / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i] / 100.0);
        total_cents %= coins[i];
    }

    return 0;
}
