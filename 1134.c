#include <stdio.h>

int main() {
    int code, alcool = 0, gasolina = 0, diesel = 0;
    do {
        scanf("%d", &code);
        if(code == 1) alcool++;
        else if(code == 2) gasolina++;
        else if(code == 3) diesel++;
    } while(code != 4);
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
    return 0;
}
