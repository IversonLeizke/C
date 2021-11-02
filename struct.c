#include <stdlib.h>
#include <stdio.h>
    #define alturaMaxima 225

int main(int argc, char const *argv[])
{
    typedef struct
    {
        int peso;
        int altura;
    } PesoAltura;

    PesoAltura pessoa1;
    pessoa1.altura = 185;
    pessoa1.peso = 80;
    
       printf("Peso: %d\nAltura: %d\n", pessoa1.peso, pessoa1.altura);
       
       if (pessoa1.altura > alturaMaxima)  
    {
        printf("Altura acima da maxima!");
    }
    else {
        printf("Altura abaixo da maxima!");
    }

    return 0;
}
