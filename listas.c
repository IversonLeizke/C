#include <stdlib.h>
#include <stdio.h>

typedef struct valor {
    int value;
    struct valor * proximo;
} t_valor;

void main() {
    t_valor * ini_valor;
    t_valor * proximo_valor;
    int resp;

    ini_valor = (t_valor *) malloc(sizeof(t_valor));
    if (ini_valor == NULL)
        exit(1);
    proximo_valor = ini_valor;

    while(1){
        printf("Insira um valor: ");
        scanf("%d", &proximo_valor->value);
        printf("Deseja continuar? <1> SIM <outro valor> NAO: ");
        scanf("%d", &resp);
        if(resp != 1)
            break;
        else {
            proximo_valor->proximo = (t_valor *) malloc(sizeof(t_valor));
            proximo_valor = proximo_valor->proximo;
        }
    }

    proximo_valor->proximo = NULL;

    proximo_valor = ini_valor;

    while(proximo_valor != NULL) {
        printf("%d ", proximo_valor->value);
        proximo_valor = proximo_valor->proximo;
    }
}
