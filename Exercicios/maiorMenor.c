#include <stdio.h>

void preencherVetor(int numbers[], int vetorSize) {
    for (int i = 0; i <= (sizeof(numbers) / sizeof(numbers[0])); i++){
        printf("\nInsita o valor para posição %d do vetor: ", i);
        scanf("%d", &numbers[i]);
    }
}

void maiorNumero(int numbers[]) {
    int maior = numbers[0];
    for (int i = 1; i <= (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        if (maior < numbers[i])
        {
            maior = numbers[i];
        }
        
    }
    printf("O maior valor inserido é %d.\n", maior);
}

void menorNumero(int numbers[]) {
    int menor = numbers[0];
    for (int i = 1; i <= (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        if (menor > numbers[i])
        {
            menor = numbers[i];
        }
        
    }
    printf("O menor valor inserido é %d.\n", menor);
}

int main(int argc, char const *argv[])
{
    int vetorSize;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &vetorSize);

    int numbers[vetorSize];
    preencherVetor(numbers, vetorSize);

    menorNumero(numbers);
    maiorNumero(numbers);

    return 0;
}