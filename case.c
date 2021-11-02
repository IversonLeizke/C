#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Insira um tipo de pontuação: ");
    scanf("%c", &ch);
    switch (ch) {
        case '.': 
            printf("Ponto");
            break;
        case ',': 
            printf("Virgula");
            break;
        case ';': 
            printf("Ponto e virgula");
            break;
        case ':': 
            printf("Dois pontos");
            break;
        default: printf("Não é pontuação!");
    }
    return 0;
}
