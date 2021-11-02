#include <stdlib.h>
#include <stdio.h>

void quickSort(int vetorq[], int left, int right) {
    int pivo = left;
    int position, minor, aux, i;
    for (position = left + 1; position <= right; position++) {
        aux = position;
        if(vetorq[aux] < vetorq[pivo]) {
            minor = vetorq[aux];
            while (aux > pivo) {
                vetorq[aux] = vetorq[aux -1];
                aux--;
            }
            vetorq[aux] = minor;
            pivo++;
        }
    }
    if (pivo - 1 >= left) {
        quickSort(vetorq, left, pivo - 1);
    }
    if (pivo + 1 <= right) {
        quickSort(vetorq, pivo + 1, right);
    }
}

void main() {
    int vetor[] = {45, 7, 10, 4,  13, 17, 20, 16, 41,  21, 38, 43, 31, 2};
    quickSort(vetor, 0, 13);
    printf("Ordered array: ");
    for (int i = 0; i <= 13; i++) printf("%d, ", vetor[i]);
}
