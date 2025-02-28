#include <stdio.h>
int main(){
    int sh, sm, eh, em, start, end, diff;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);
    start = sh * 60 + sm;
    end = eh * 60 + em;
    if(end <= start) end += 1440;
    diff = end - start;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diff/60, diff%60);
    return 0;
}


