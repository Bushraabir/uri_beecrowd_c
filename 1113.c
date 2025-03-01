#include <stdio.h>

int main() {
    int x, y;
    while(1) {
        scanf("%d %d", &x, &y);
        if(x == y) break;
        printf("%s\n", x < y ? "Crescente" : "Decrescente");
    }
    return 0;
}
