#include <stdio.h>

void preencherVetor(int numbers[], int vetorSize) {
    for (int i = 0; i < vetorSize; i++){
        printf("\nInsita o valor para posição %d do vetor: ", i);
        scanf("%d", &numbers[i]);
    }
}

void ordenar2(int numbers[], int vetorSize) {
    int temp;
    if ((vetorSize - 1) < 2) {
        if (numbers[0] < numbers[1])
        {
            temp = numbers[0];
            numbers[0] = numbers[1];
            numbers[1] = temp;
        }
    }
    else {
        if (numbers[vetorSize - 2] < numbers[vetorSize - 1])
        {
            temp = numbers[vetorSize - 2];
            numbers[vetorSize - 2] = numbers[vetorSize - 1];
            numbers[vetorSize - 1] = temp;
        }
        ordenar2(numbers, (vetorSize - 1));
    }
}

void ordenar(int numbers[], int vetorSize) {
    if (2 < vetorSize)
    {
        ordenar(numbers, (vetorSize - 1));
    }
    ordenar2(numbers, vetorSize);
}

int main(int argc, char const *argv[])
{
    int vetorSize;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &vetorSize);

    int numbers[vetorSize];
    preencherVetor(numbers, vetorSize);

    ordenar(numbers, vetorSize);

    for (int i = 0; i < vetorSize; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}