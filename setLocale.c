#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("O sistema imprimi os acentos e utiliza , ao inv�s de . para separadar decimal.");
}
