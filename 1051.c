#include <stdio.h>
int main(){
    double salary, tax = 0.0;
    scanf("%lf", &salary);

    if(salary <= 2000.0){
        printf("Isento\n");
    } else {
        double exceed = salary - 2000.0;
        if(exceed > 0){
            double part = exceed > 1000.0 ? 1000.0 : exceed;
            tax += part * 0.08;
        }
        if(exceed > 1000.0){
            double part = exceed - 1000.0;
            if(part > 1500.0) part = 1500.0;
            tax += part * 0.18;
        }
        if(exceed > 2500.0){
            double part = exceed - 2500.0;
            tax += part * 0.28;
        }
        printf("R$ %.2f\n", tax);
    }
    return 0;
}

