#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify(int *numerator, int *denominator) {
    int common_divisor = gcd(*numerator, *denominator);
    *numerator /= common_divisor;
    *denominator /= common_divisor;
    if (*denominator < 0) {
        *numerator *= -1;
        *denominator *= -1;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int N1, D1, N2, D2;
        char op;
        scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);

        int result_num, result_den;

        if (op == '+') {
            result_num = N1 * D2 + N2 * D1;
            result_den = D1 * D2;
        } else if (op == '-') {
            result_num = N1 * D2 - N2 * D1;
            result_den = D1 * D2;
        } else if (op == '*') {
            result_num = N1 * N2;
            result_den = D1 * D2;
        } else if (op == '/') {
            result_num = N1 * D2;
            result_den = N2 * D1;
        } else {
            result_num = 0;
            result_den = 1;
        }

        int simplified_num = result_num;
        int simplified_den = result_den;
        simplify(&simplified_num, &simplified_den);

        printf("%d/%d = %d/%d\n", result_num, result_den, simplified_num, simplified_den);
    }
    return 0;
}
