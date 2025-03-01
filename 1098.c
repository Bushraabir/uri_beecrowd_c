#include <stdio.h>

int main() {
    for (int counter = 0; counter <= 10; counter++) {
        double I = counter * 0.2;
        for (int k = 1; k <= 3; k++) {
            double J = I + k;
            printf("I=%g J=%g\n", I, J);
        }
    }
    return 0;
}
