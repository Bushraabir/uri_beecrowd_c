#include <stdio.h>
int main(){
    double s, ns, r;
    int p;
    scanf("%lf", &s);
    if(s <= 400.00)
        p = 15;
    else if(s <= 800.00)
        p = 12;
    else if(s <= 1200.00)
        p = 10;
    else if(s <= 2000.00)
        p = 7;
    else
        p = 4;
    r = s * p / 100.0;
    ns = s + r;
    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: %d %%\n", p);
    return 0;
}

