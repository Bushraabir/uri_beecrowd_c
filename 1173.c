#include <stdio.h>

int main() {
    int N[10], V, i;
    scanf("%d", &V);
    N[0] = V;
    for (i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2;
    }
    for (i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}

