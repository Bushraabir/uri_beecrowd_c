#include <stdio.h>

int main() {
    int day1, h1, m1, s1, day2, h2, m2, s2;
    char temp[5];

    scanf("%s %d", temp, &day1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", temp, &day2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start = day1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    int end = day2 * 86400 + h2 * 3600 + m2 * 60 + s2;
    int diff = end - start;

    int days = diff / 86400;
    diff %= 86400;
    int hours = diff / 3600;
    diff %= 3600;
    int mins = diff / 60;
    int secs = diff % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", mins);
    printf("%d segundo(s)\n", secs);

    return 0;
}
