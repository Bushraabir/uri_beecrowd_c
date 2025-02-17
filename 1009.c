#include <stdio.h>
int main(){
    char name[50];
    double salary, sale, total;
    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sale);
    total = salary + sale * 0.15;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}

