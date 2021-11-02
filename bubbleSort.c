#include <stdio.h>

void main() {
    int vetor[] = {45, 7, 10, 4,  13, 17, 20, 16, 41,  21, 38, 43, 31, 2};
    int i, j, tmp;

    for (i = 0; i < 13; i++) {
        for (j = i +1; j < 14; j++) {
            if (vetor[i] > vetor[j]){
                tmp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = tmp;
            }
        }
    }

    printf("Ordered array: ");
    for(i = 0; i < 14; i++) {
        printf("%d, ", vetor[i]);
    }
}
