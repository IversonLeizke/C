#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, m, total;
    int alunos;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("\n");
    for (int i = 0; i < alunos; i++) {
        printf("%dº aluno:\n", i + 1);
        printf("Insira a primeira nota: ");
        scanf("%f", &a);
        printf("Insira a segunda nota: ");
        scanf("%f", &b);
        printf("Insira a terceira nota: ");
        scanf("%f", &c);
        m = (a + b + c) / 3;
        printf("A média do aluno foi %.1f\n", m);
        total += m;
        printf("\n");
    }
    total /= alunos;
    printf("-----------------");
    printf("A média da classe foi %.1f", total);
}
