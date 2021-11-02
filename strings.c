#include <stdio.h>
#include <string.h> // biblioteca para trabalhar com strings

void main() {
    char nome[10];
    char lastName[] = " Leitzke";
    char fullName[20];
    strcpy(nome, "Iverson"); // atribui uma string a variavel caracter
    printf("%s has %d caracteres", nome, strlen(nome)); // strlen() mostra o tamanho de uma string
    printf("\n%i", strcmp(nome, "Iverson")); //strcmp compara duas strings, se identico 0 se diferente 1
    printf("\n%s", strcat(nome, lastName)); //strcat concatena duas strings
    //strlwr() colocar todos os caracters em minisculas
    //strupr() coloca todos os caracters em maiusculas
}
