#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Insira um valor: ");
    scanf("%d", &n);
    printf("O valor %d é ", n);
    if (n == 0) {
        printf("0.");
    } else {
        (n > 0) ? printf("um valor positivo.") : printf("um valor negativo.");
    }
}
