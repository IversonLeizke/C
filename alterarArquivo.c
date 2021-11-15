#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese");
    FILE *fp;
    char ch;

    argc = 2;

    if (argc != 2) {
        printf("Você esqueceu de digitar o nome do arquivo.\n");
        exit(1);
    }

    if ((fp=fopen("teste.txt", "w")) == NULL) {
        printf("O arquivo não pode ser aberto.\n");
    }

    do{
        ch = getchar();
        fputs(ch, fp);
    } while (ch != '$');

    fclose("fp");
}
