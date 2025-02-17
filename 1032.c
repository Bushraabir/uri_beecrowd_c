#include <stdio.h>
#include <stdbool.h>

#define MAX_PRIMES 3501

int primes[MAX_PRIMES];
int prime_count = 0;

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void generate_primes() {
    int num = 2;
    while (prime_count < MAX_PRIMES) {
        if (is_prime(num)) {
            primes[prime_count++] = num;
        }
        num++;
    }
}

int josephus_cousin(int n) {
    int circle[n];
    for (int i = 0; i < n; i++) {
        circle[i] = i + 1;
    }
    int index = 0;
    for (int i = 0; i < n - 1; i++) {
        int m = primes[i];
        index = (index + m - 1) % (n - i);
        for (int j = index; j < n - i - 1; j++) {
            circle[j] = circle[j + 1];
        }
    }
    return circle[0];
}

int main() {
    generate_primes();
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", josephus_cousin(n));
    }
    return 0;
}
