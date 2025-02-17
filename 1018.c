#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", N);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", N / notas[i], notas[i]);
        N %= notas[i];
    }

    return 0;
}

