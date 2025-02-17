#include <stdio.h>
int main(){
    int number, hours;
    double rate, salary;
    scanf("%d %d %lf", &number, &hours, &rate);
    salary = hours * rate;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}

