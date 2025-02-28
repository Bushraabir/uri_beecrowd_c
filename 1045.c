#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, aux;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a < b){ aux = a; a = b; b = aux; }
    if(a < c){ aux = a; a = c; c = aux; }
    if(b < c){ aux = b; b = c; c = aux; }
    if(a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(fabs(a*a - (b*b + c*c)) < 1e-9)
            printf("TRIANGULO RETANGULO\n");
        if(a*a > b*b + c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        if(a*a < b*b + c*c)
            printf("TRIANGULO ACUTANGULO\n");
        if(a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if(a == b || b == c || a == c)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

