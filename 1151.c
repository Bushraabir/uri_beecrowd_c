#include <stdio.h>

int main() {
    int n, a = 0, b = 1, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}

