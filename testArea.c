#include <stdio.h>
int vetor[5] = {1, 3, 2, 5, 4};

void bubble (int *vetor, int total) {
    int i, j, tmp, pos;

    for (i = 0; i < total; i++) {
        pos = 0;
        for (j = i + 1; j < total; j++) {
            if (vetor[i] > vetor[j]) {
                pos = j;
            }
        }
        if (pos > 0) {
            tmp = vetor[pos];
            vetor[pos] = vetor[i];
            vetor[i] = tmp;
        }
    }
}

void imprimir(int *vetor, int total) {
    for (int c = 0; c < total; c++) {
        printf("%d", vetor[c]);
    }
    printf("\n");
}

void main() {
    imprimir(vetor, 5);
    bubble(vetor, 5);
    imprimir(vetor, 5);
}

