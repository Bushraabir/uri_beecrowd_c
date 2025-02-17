#include <stdio.h>

int calculate_josephus(int n, int m) {
    int result = 0;
    for (int i = 2; i <= n; i++) {
        result = (result + m) % i;
    }
    return result;
}

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        int target_position = 11;
        int adjusted_n = N - 1;
        int m = 1;
        while (1) {
            if (calculate_josephus(adjusted_n, m) == target_position) {
                printf("%d\n", m);
                break;
            }
            m++;
        }
    }
    return 0;
}
