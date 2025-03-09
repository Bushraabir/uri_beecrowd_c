#include <stdio.h>

int sum_of_divisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int N, X;
    scanf("%d", &N);

    while (N--) {
        scanf("%d", &X);
        if (sum_of_divisors(X) == X) {
            printf("%d eh perfeito\n", X);
        } else {
            printf("%d nao eh perfeito\n", X);
        }
    }

    return 0;
}

