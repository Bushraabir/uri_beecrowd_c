#include <stdio.h>
int main(){
    int code1, quant1, code2, quant2;
    double price1, price2, total;
    scanf("%d %d %lf", &code1, &quant1, &price1);
    scanf("%d %d %lf", &code2, &quant2, &price2);
    total = quant1 * price1 + quant2 * price2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
