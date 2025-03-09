#include <stdio.h>
#include <math.h>

int main() {
    int N, X, i, is_prime;
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &X);
        if (X == 2) {
            printf("%d eh primo\n", X);
            continue;
        }
        if (X < 2 || X % 2 == 0) {
            printf("%d nao eh primo\n", X);
            continue;
        }
        is_prime = 1;
        for (i = 3; i <= sqrt(X); i += 2) {
            if (X % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}
