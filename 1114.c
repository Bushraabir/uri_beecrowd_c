#include <stdio.h>

int main() {
    int password;
    while(1) {
        scanf("%d", &password);
        if(password == 2002) {
            printf("Acesso Permitido\n");
            break;
        }
        printf("Senha Invalida\n");
    }
    return 0;
}
