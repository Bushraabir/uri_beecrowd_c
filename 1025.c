#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int binarySearch(int a[], int n, int x) {
    int low = 0, high = n - 1, pos = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == x) {
            pos = mid;
            high = mid - 1;
        } else if (a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return pos;
}

int main(){
    int N, Q, caseNum = 1;
    while (scanf("%d %d", &N, &Q) == 2 && (N || Q)) {
        int *marbles = malloc(N * sizeof(int));
        for (int i = 0; i < N; i++)
            scanf("%d", &marbles[i]);
        qsort(marbles, N, sizeof(int), cmp);
        printf("CASE# %d:\n", caseNum++);
        for (int i = 0; i < Q; i++) {
            int x;
            scanf("%d", &x);
            int idx = binarySearch(marbles, N, x);
            if (idx == -1)
                printf("%d not found\n", x);
            else
                printf("%d found at %d\n", x, idx + 1);
        }
        free(marbles);
    }
    return 0;
}

