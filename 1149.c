#include <stdio.h>

int main() {
    int a, n, sum = 0;
    scanf("%d", &a);
    do {
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 0; i < n; i++) {
        sum += a + i;
    }
    printf("%d\n", sum);
    return 0;
}

