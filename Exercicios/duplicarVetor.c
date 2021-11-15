#include <stdio.h>

void preencherVetor(int* numbers, int vetorSize) {
    for (int i = 0; i < vetorSize; i++){
        printf("Insita o valor para posição %d do vetor: ", i);
        scanf("%d", &numbers[i]);
    }
}

int main(int argc, char const *argv[])
{
    int vetorSize;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &vetorSize);

    int numbers[vetorSize];
    preencherVetor(numbers, vetorSize);

    int numbers2[vetorSize];
    for (int i = 0; i < vetorSize; i++)
    {
        numbers2[i] = numbers[i];
    }
    

    printf("Vetor1: ");
    for (int i = 0; i < vetorSize; i++)
    {
        printf("%d ", numbers[i]);
    }

        printf("Vetor2: ");
    for (int i = 0; i < vetorSize; i++)
    {
        printf("%d ", numbers2[i]);
    }
    
    return 0;
}