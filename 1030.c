#include <stdio.h>

int main() {
    int NC, caso = 1;
    scanf("%d", &NC);
    while (NC--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int res = 0;
        for (int m = 2; m <= n; m++) {
            res = (res + k) % m;
        }
        printf("Case %d: %d\n", caso++, res + 1);
    }
    return 0;
}
