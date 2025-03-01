#include <stdio.h>

int main() {
    int m, n, start, end, i, sum;
    while(1) {
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0) break;
        start = m < n ? m : n;
        end = m > n ? m : n;
        sum = 0;
        for(i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
