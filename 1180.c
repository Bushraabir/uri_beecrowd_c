#include <stdio.h>

int main() {
    int N, X[1000], min_value, min_position;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    min_value = X[0];
    min_position = 0;
    for (int i = 1; i < N; i++) {
        if (X[i] < min_value) {
            min_value = X[i];
            min_position = i;
        }
    }
    printf("Menor valor: %d\n", min_value);
    printf("Posicao: %d\n", min_position);
    return 0;
}

