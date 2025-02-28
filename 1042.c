#include <stdio.h>
int main(){
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    int o1 = a, o2 = b, o3 = c;
    if(a > b){t = a; a = b; b = t;}
    if(a > c){t = a; a = c; c = t;}
    if(b > c){t = b; b = c; c = t;}
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", o1, o2, o3);
    return 0;
}

