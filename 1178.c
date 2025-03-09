#include <stdio.h>

int main() {
    double N[100];
    double X;
    scanf("%lf", &X);
    N[0] = X;
    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2;
    }
    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4f\n", i, N[i]);
    }
    return 0;
}

