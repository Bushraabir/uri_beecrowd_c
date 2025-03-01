#include <stdio.h>

int main() {
    float num, sum = 0;
    int pos_count = 0, i;

    for(i = 0; i < 6; i++) {
        scanf("%f", &num);
        if(num > 0) {
            pos_count++;
            sum += num;
        }
    }

    printf("%d valores positivos\n", pos_count);
    printf("%.1f\n", sum/pos_count);

    return 0;
}
