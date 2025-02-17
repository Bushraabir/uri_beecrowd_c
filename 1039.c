#include <stdio.h>

int main() {
    int R1, X1, Y1, R2, X2, Y2;
    while (scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2, &X2, &Y2) == 6) {
        if (R2 > R1) {
            printf("MORTO\n");
            continue;
        }
        long long dx = (long long)X2 - X1;
        long long dy = (long long)Y2 - Y1;
        long long distance_sq = dx * dx + dy * dy;
        long long allowed = (long long)(R1 - R2) * (R1 - R2);
        printf("%s\n", distance_sq <= allowed ? "RICO" : "MORTO");
    }
    return 0;
}
