#include <stdio.h>

int main() {
    unsigned int num1, num2;
    while (scanf("%u %u", &num1, &num2) == 2) {
        unsigned int result = num1 ^ num2;
        printf("%u\n", result);
    }
    return 0;
}

