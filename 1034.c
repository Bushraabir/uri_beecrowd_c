#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        int blocks[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &blocks[i]);
        }
        qsort(blocks, N, sizeof(int), compare);

        int *dp = (int*)malloc((M + 1) * sizeof(int));
        for (int i = 0; i <= M; ++i) {
            dp[i] = i;
        }
        dp[0] = 0;

        for (int i = 1; i <= M; ++i) {
            for (int j = 0; j < N; ++j) {
                int a = blocks[j];
                if (a > i) continue;
                if (dp[i - a] + 1 < dp[i]) {
                    dp[i] = dp[i - a] + 1;
                }
                if (a == i) break;
            }
        }

        printf("%d\n", dp[M]);
        free(dp);
    }
    return 0;
}
