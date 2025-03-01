#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &y);
        if(y == 0) printf("divisao impossivel\n");
        else printf("%.1f\n", (float)x / y);
    }
    return 0;
}
