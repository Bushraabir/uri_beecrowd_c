#include <stdio.h>

int main() {
    int x, z, count = 0, sum = 0;
    scanf("%d", &x);
    do {
        scanf("%d", &z);
    } while (z <= x);
    while (sum <= z) {
        sum += x++;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
