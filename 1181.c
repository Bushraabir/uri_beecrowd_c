#include <stdio.h>

int main() {
    int L;
    char T;
    double M[12][12];
    scanf("%d", &L);
    scanf(" %c", &T);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    double sum = 0.0;
    for(int j = 0; j < 12; j++) {
        sum += M[L][j];
    }
    if(T == 'S') {
        printf("%.1f\n", sum);
    } else if(T == 'M') {
        double average = sum / 12.0;
        printf("%.1f\n", average);
    }
    return 0;
}
