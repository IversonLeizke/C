#include <stdio.h>

int somatorio(int x[], int itens) {
    int total;
    if (itens - 1 == 0) {
        total = x[itens - 1];
    }
    else {
        total = x[itens - 1] + somatorio(x, (itens - 1));
    }
    return total;
}

int main() {
    
    int numeros[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nInsert the %dº number: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("The numbers in the array 'numeros' are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\nThe total of the sum of the numbers is %d", somatorio(numeros, 10));
        
    return 0;
}