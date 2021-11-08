#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void escolha(int op) {
    switch (op) {
        case 1 :
            printf("\"Pedra\"");
            break;
        case 2 :
            printf("\"Papel\"");
            break;
        case 3:
            printf("\"Tesoura\"");
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n = (rand() % 3) + 1;
    int op;
    printf("%d", n);
    printf("Escolha uma das opções a seguir:\n1 - Pedra\n2 - Papel\n3 - Tesoura\nSua escolha: ");
    scanf("%d", &op);
    printf("\nVocê escolheu ");
    escolha(op);
    printf("\nO computador escolheu ");
    escolha(n);
    if (op == n) {
        printf("\nEmpatou!");
    } else {
        if ((op == 1 && n == 2) || (op == 2 && n == 3) || (op == 3 && n == 1)) {
            printf("\nVocê perdeu!");
        } else {
            printf("\nVocê ganhou!");
        }
    }
}
