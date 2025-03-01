#include <stdio.h>

int main() {
    int n, amount, total = 0, rabbits = 0, rats = 0, frogs = 0, i;
    char type;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %c", &amount, &type);
        total += amount;
        if(type == 'C') rabbits += amount;
        else if(type == 'R') rats += amount;
        else if(type == 'S') frogs += amount;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2f %%\n", (float)rabbits * 100 / total);
    printf("Percentual de ratos: %.2f %%\n", (float)rats * 100 / total);
    printf("Percentual de sapos: %.2f %%\n", (float)frogs * 100 / total);
    return 0;
}
