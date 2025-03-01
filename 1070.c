#include <stdio.h>

int main() {
    int x, i, num;
    scanf("%d", &x);
    num = x % 2 == 0 ? x + 1 : x;
    for(i = 0; i < 6; i++) {
        printf("%d\n", num);
        num += 2;
    }
    return 0;
}
