#include <stdio.h>

int main() {
    int num, max = 0, pos = 0, i;
    for(i = 1; i <= 100; i++) {
        scanf("%d", &num);
        if(num > max) {
            max = num;
            pos = i;
        }
    }
    printf("%d\n%d\n", max, pos);
    return 0;
}
