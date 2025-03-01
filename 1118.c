#include <stdio.h>

int main() {
    float score, sum;
    int count, x;
    while(1) {
        sum = 0;
        count = 0;
        while(count < 2) {
            scanf("%f", &score);
            if(score >= 0 && score <= 10) {
                sum += score;
                count++;
            } else {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n", sum / 2);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while(x < 1 || x > 2);
        if(x == 2) break;
    }
    return 0;
}
