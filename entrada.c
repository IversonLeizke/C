#include <stdio.h>

void main() {
char a;
char b;
char name[30];
/*
Leitura de caracter utilizando scanf
printf("Insira apenas uma letra: ");
scanf("%c", &a);
fflush(stdin); // Limpa o buffer para retirar o armazenamento do enter da inser��o do caracter anterior
printf("Insira mais uma letra: ");
scanf("%c", &b);
fflush(stdin);
*/

/*
leitura de caracter utilizando getchar()
printf("Insira apenas uma letra: ");
a = getchar();
fflush(stdin);
printf("Insira mais uma letra: ");
b = getchar();
fflush(stdin);
printf("As letras digitadas foram %c e %c.", a, b);
*/

/*
Leitura de Strinf, "Vetor de caracteres".
Problema de leitura, so grava at� o primeiro espa�o
scanf("%s", name);
printf("%s", name);
*/

//Capturando string com a fun��o gets()
gets(name);
printf("Voce digitou o nome: %s", name);
}
