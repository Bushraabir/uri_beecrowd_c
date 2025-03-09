#include <stdio.h>

int main() {
    int age, count = 0;
    double sum = 0;
    while (1) {
        scanf("%d", &age);
        if (age < 0) break;
        sum += age;
        count++;
    }
    if (count > 0) {
        printf("%.2lf\n", sum / count);
    }
    return 0;
}

