#include <stdio.h>

int main() {
    int fib[41];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int N;
    scanf("%d", &N);
    while (N--) {
        int X;
        scanf("%d", &X);
        int resultado = fib[X];
        int chamadas = 2 * fib[X + 1] - 2;
        printf("fib(%d) = %d calls = %d\n", X, chamadas, resultado);
    }
    return 0;
}

