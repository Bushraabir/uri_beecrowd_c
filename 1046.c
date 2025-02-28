#include <stdio.h>

int main() {
    int inicio, fim, duracao;
    scanf("%d %d", &inicio, &fim);

    if (inicio == fim) {
        duracao = 24;
    } else if (inicio < fim) {
        duracao = fim - inicio;
    } else {
        duracao = (24 - inicio) + fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}

