#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int start = (X < Y) ? X : Y;
    int end = (X > Y) ? X : Y;
    for (int i = start + 1; i < end; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }
    return 0;
}
