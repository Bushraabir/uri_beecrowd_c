#include <stdio.h>

int main() {
    int T, N[1000];
    scanf("%d", &T);
    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}

