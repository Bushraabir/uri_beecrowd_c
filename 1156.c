#include <stdio.h>

int main() {
    double s = 0.0;
    int numerator = 1, denominator = 1;
    for (; numerator <= 39; numerator += 2, denominator *= 2) {
        s += (double)numerator / denominator;
    }
    printf("%.2lf\n", s);
    return 0;
}

