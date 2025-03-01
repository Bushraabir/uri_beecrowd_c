#include <stdio.h>

int main() {
    int x, y, start, end, i, sum = 0;
    scanf("%d %d", &x, &y);
    start = x < y ? x : y;
    end = x > y ? x : y;
    for(i = start; i <= end; i++) {
        if(i % 13 != 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
