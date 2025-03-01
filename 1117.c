#include <stdio.h>

int main() {
    float score, sum = 0;
    int count = 0;
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
    return 0;
}
