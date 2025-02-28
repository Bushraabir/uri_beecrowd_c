#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    printf("%s\n", months[n-1]);
    return 0;
}
