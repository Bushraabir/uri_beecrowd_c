#include <stdio.h>

int main() {
    int numbers[15], odd[5], even[5];
    int oddIndex = 0, evenIndex = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 15; i++) {
        if (numbers[i] % 2 != 0) {
            odd[oddIndex] = numbers[i];
            oddIndex++;
            if (oddIndex == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, odd[j]);
                }
                oddIndex = 0;
            }
        } else {
            even[evenIndex] = numbers[i];
            evenIndex++;
            if (evenIndex == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, even[j]);
                }
                evenIndex = 0;
            }
        }
    }

    if (oddIndex > 0) {
        for (int i = 0; i < oddIndex; i++) {
            printf("impar[%d] = %d\n", i, odd[i]);
        }
    }

    if (evenIndex > 0) {
        for (int i = 0; i < evenIndex; i++) {
            printf("par[%d] = %d\n", i, even[i]);
        }
    }

    return 0;
}

