#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO {
    int dado;
    struct NO *prox;
} NO;

typedef struct Pilha {
    NO *topo;
} Pilha;

void inicializa_pilha(Pilha *p) {
    p->topo = NULL;
}

void empilha(int dado, Pilha *p) {
    NO *ptr = (NO*) malloc(sizeof(NO));
    if (ptr == NULL) {
        printf("Erro de alocação de novo nó.\n");
        return;
    } else {
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
        return;
    }
}

void desempilha(Pilha *p) {
    NO* ptr = p->topo;
    int dado;
    if (ptr == NULL) {
        printf("Pilha vazia\n");
        return;
    } else {
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
}

void imprime_pilha(Pilha *p) {
    NO *ptr = p->topo;
    if (ptr == NULL) {
        printf("Pilha vazia!\n");
        return;
    } else {
        while (ptr != NULL) {
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

void main() {
    Pilha *p1 = (Pilha*) malloc(sizeof(Pilha));
    if (p1 == NULL) {
        printf("Erro de alocação.\n");
        exit(0);
    } else {
        inicializa_pilha(p1);
        empilha(10, p1);
        empilha(20, p1);
        empilha(30, p1);
        imprime_pilha(p1);
        desempilha(p1);
        imprime_pilha(p1);
    }
}
