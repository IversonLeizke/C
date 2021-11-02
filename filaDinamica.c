#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO {
    int dado;
    struct NO *prox;
} NO;

typedef struct FILA {
    NO *ini;
    NO *fim;
} FILA;

void inicializaFila(FILA *f) {
    f->ini = NULL;
    f->fim = NULL;
}

void enfileira(int dado, FILA *f) {
    NO *ptr = (NO*) malloc(sizeof(NO));
    if (ptr == NULL) {
        printf("Erro de alocação.\n");
    } else {
        ptr->dado = dado;
        printf("%d \n", dado);
        ptr->prox = NULL;
        if (f->ini == NULL) {
            f->ini = ptr;
        } else {
            f->fim->prox = ptr;
        }
        f->fim = ptr;
    }
}

int desemfileira(FILA *f) {
    NO *ptr = f->ini;
    int dado;
    if (ptr != NULL) {
        f->ini = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        if(f->ini == NULL) {
            f->fim == NULL;
        }
    } else {
        printf("Fila vazia!");
    }
}

void imprimiFila(FILA *f) {
    NO *ptr = f->ini;
    if (ptr != NULL) {
        while(ptr != NULL) {
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    } else {
        printf("Fila vazia.\n");
    }
}

void main() {
    FILA *f1 = (FILA*) malloc(sizeof(FILA));
    if (f1 == NULL) {
        printf("Erro de alocação!\n");
        exit(-1);
    } else {
        inicializaFila(f1);
        enfileira(10, f1);
        enfileira(20, f1);
        enfileira(30, f1);
        imprimiFila(f1);
        desemfileira(f1);
        imprimiFila(f1);
    }
}
