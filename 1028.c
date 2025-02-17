#include <stdio.h>

int main() {
    int N, F1, F2, i, temp;


    scanf("%d", &N);


    for (i = 0; i < N; i++) {

        scanf("%d %d", &F1, &F2);


        while (F2 != 0) {
            temp = F2;
            F2 = F1 % F2;
            F1 = temp;
        }


        printf("%d\n", F1);
    }

    return 0;
}
