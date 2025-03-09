#include <stdio.h>

unsigned long long fibonacci(int n) {
    unsigned long long a = 0, b = 1, c;
    if (n == 0) return a;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fibonacci(N));
    }
    return 0;
}

