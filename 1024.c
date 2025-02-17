#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    for(int i=0;i<n;i++){
        char s[1100];
        fgets(s, 1100, stdin);
        int len = strlen(s);
        if(s[len-1]=='\n'){
            s[len-1] = '\0';
            len--;
        }
        for(int j=0;j<len;j++){
            if(isalpha(s[j])){
                s[j] = s[j] + 3;
            }
        }
        char rev[1100];
        for(int j=0;j<len;j++){
            rev[j] = s[len-1-j];
        }
        rev[len] = '\0';
        int half = len/2;
        for(int j=half;j<len;j++){
            rev[j] = rev[j] - 1;
        }
        printf("%s\n", rev);
    }
    return 0;
}

