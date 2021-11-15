#include <stdio.h>

void preencherVetor(int numbers[], int vetorSize) {
    for (int i = 0; i < vetorSize; i++){
        printf("\nInsita o valor para posição %d do vetor: ", i);
        scanf("%d", &numbers[i]);
    }
}

int menorNumero(int numbers[]) {
    int menor = numbers[0];
    for (int i = 1; i <= (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        if (menor > numbers[i])
        {
            menor = numbers[i];
        }
        
    }
    return menor;
}

int fatorial(int menor) {
    int fator;
    if (menor == 1) {
        fator = 1;
    } 
    else {
        fator = menor * fatorial(menor - 1);
    }
    return fator;
}

int main(int argc, char const *argv[])
{
    int vetorSize;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &vetorSize);

    int numbers[vetorSize];
    preencherVetor(numbers, vetorSize);

    int menor = menorNumero(numbers);
    int fator = fatorial(menor);

    printf("O fatorial de %d é %d.", menor, fator);

    return 0;
}