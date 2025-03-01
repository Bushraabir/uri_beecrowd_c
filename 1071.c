#include <stdio.h>

int main() {
    int x, y, start, end, sum = 0, i;
    scanf("%d %d", &x, &y);

    start = x < y ? x : y;
    end = x > y ? x : y;

    start = start % 2 == 0 ? start + 1 : start + 2;

    for(i = start; i < end; i += 2) {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
