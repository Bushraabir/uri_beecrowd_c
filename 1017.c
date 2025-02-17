#include <stdio.h>

int main() {
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    double litros = (tempo * velocidade) / 12.0;
    printf("%.3lf\n", litros);
    return 0;
}

