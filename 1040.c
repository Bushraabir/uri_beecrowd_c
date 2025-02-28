#include <stdio.h>
int main(){
    float a, b, c, d, m, ex, f;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    m = (a*2 + b*3 + c*4 + d)/10;
    printf("Media: %.1f\n", m);
    if(m >= 7.0)
        printf("Aluno aprovado.\n");
    else if(m < 5.0)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &ex);
        printf("Nota do exame: %.1f\n", ex);
        f = (m + ex) / 2;
        if(f >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", f);
    }
    return 0;
}

