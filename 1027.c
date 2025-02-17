#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int lower;
    int upper;
} Column;

int compareInt(const void *a, const void *b) {
    return (*(int*)a) - (*(int*)b);
}

int main() {
    int n;
    while(scanf("%d", &n) == 1) {
        int *xs = malloc(n * sizeof(int));
        int *ys = malloc(n * sizeof(int));
        int i, j;
        for(i = 0; i < n; i++){
            scanf("%d %d", &xs[i], &ys[i]);
        }
        int candCount = 0;
        int *aCandidates = malloc(2 * n * sizeof(int));
        for(i = 0; i < n; i++){
            aCandidates[candCount++] = ys[i] + 1;
            aCandidates[candCount++] = ys[i] - 1;
        }
        qsort(aCandidates, candCount, sizeof(int), compareInt);
        int uniqueCount = 0;
        for(i = 0; i < candCount; i++){
            if(i == 0 || aCandidates[i] != aCandidates[i-1])
                aCandidates[uniqueCount++] = aCandidates[i];
        }
        int bestOverall = 0;
        for(i = 0; i < uniqueCount; i++){
            int a = aCandidates[i];
            int lowerVal = a - 1;
            int upperVal = a + 1;
            int colCount = 0;
            Column *cols = malloc(n * sizeof(Column));
            int currentX = 30000;
            int first = 1;
            for(j = 0; j < n; j++){
                if(xs[j] < currentX || first){
                    first = 0;
                    currentX = xs[j];
                }
            }
            int maxX = -30000;
            for(j = 0; j < n; j++){
                if(xs[j] > maxX) maxX = xs[j];
            }
            int range = maxX - currentX + 1;
            int *hasLower = calloc(range, sizeof(int));
            int *hasUpper = calloc(range, sizeof(int));
            for(j = 0; j < n; j++){
                if(ys[j] == lowerVal || ys[j] == upperVal) {
                    int idx = xs[j] - currentX;
                    if(ys[j] == lowerVal) hasLower[idx] = 1;
                    if(ys[j] == upperVal) hasUpper[idx] = 1;
                }
            }
            for(j = 0; j < range; j++){
                if(hasLower[j] || hasUpper[j]){
                    cols[colCount].x = currentX + j;
                    cols[colCount].lower = hasLower[j];
                    cols[colCount].upper = hasUpper[j];
                    colCount++;
                }
            }
            free(hasLower);
            free(hasUpper);
            int dp0[colCount+1], dp1[colCount+1], dpNone[colCount+1];
            for(j = 0; j <= colCount; j++){
                dp0[j] = dp1[j] = dpNone[j] = 0;
            }
            for(j = 0; j < colCount; j++){
                dpNone[j+1] = dpNone[j];
                dp0[j+1] = dp0[j];
                dp1[j+1] = dp1[j];
                if(dpNone[j] >= 0) {
                    if(cols[j].lower)
                        if(dpNone[j] + 1 > dp0[j+1])
                            dp0[j+1] = dpNone[j] + 1;
                    if(cols[j].upper)
                        if(dpNone[j] + 1 > dp1[j+1])
                            dp1[j+1] = dpNone[j] + 1;
                }
                if(dp0[j] >= 0 && cols[j].upper) {
                    if(dp0[j] + 1 > dp1[j+1])
                        dp1[j+1] = dp0[j] + 1;
                }
                if(dp1[j] >= 0 && cols[j].lower) {
                    if(dp1[j] + 1 > dp0[j+1])
                        dp0[j+1] = dp1[j] + 1;
                }
            }
            int bestForA = dp0[colCount] > dp1[colCount] ? dp0[colCount] : dp1[colCount];
            if(bestForA > bestOverall)
                bestOverall = bestForA;
            free(cols);
        }
        printf("%d\n", bestOverall);
        free(aCandidates);
        free(xs);
        free(ys);
    }
    return 0;
}

