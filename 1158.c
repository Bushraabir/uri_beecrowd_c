#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &X, &Y);
        int sum = 0;

        for (int i = 0; i < Y; i++) {
            if (X % 2 == 0) {
                X++;
            }
            sum += X;
            X += 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}

