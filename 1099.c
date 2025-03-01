#include <stdio.h>

int main() {
    int n, x, y, i, start, end, sum;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &y);
        start = x < y ? x + 1 : y + 1;
        end = x > y ? x - 1 : y - 1;
        sum = 0;
        if(start <= end) {
            start += (start % 2 == 0);
            for(i = start; i <= end; i += 2) {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
