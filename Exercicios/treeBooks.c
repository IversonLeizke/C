#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    long int ISBN;
    char name[30];
    float value;
    char author[15];
    char publishingHouse[10];
    int puclishingYear;
};

typedef struct item Item;

struct node {
    Item item;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *treeInitialize() {
    return NULL;
}

Item itemCreat(int ISBN, char name[30], int value, char author[15], char publishingHouse[10], int puclishingYear) {
    Item item;
    item.ISBN = ISBN;
    strcpy(item.name, name);
    item.value = value;
    strcpy(item.author, author);
    strcpy(item.publishingHouse, publishingHouse);
    item.puclishingYear = puclishingYear;
    return item;
}

Node *treeInsert(Node *root, Item x) {
    if (root == NULL) {
        Node *aux = (Node*) malloc(sizeof(Node));
        aux->item = x;
        aux->left = NULL;
        aux->right = NULL;
        return aux;
    }
    else {
        if (x.ISBN > root->item.ISBN) {
            root->right = treeInsert(root->right, x);
        }
        else {
            root->left = treeInsert(root->left, x);
        }
    }
}

void treePrint(Node *root) {
    if (root != NULL) {
        printf("ISBN: %d \n", root->item.ISBN);
        printf("Nome: %s \n", root->item.name);
        printf("Valor R$: %.2f \n", root->item.value);
        printf("Autor: %s \n", root->item.author);
        printf("Editora: %s \n", root->item.publishingHouse);
        printf("Publicação: %d \n\n", root->item.puclishingYear);
        treePrint(root->left);
        treePrint(root->right);
    }
}

void treeFree(Node *root) {
    if (root != NULL) {
        treeFree(root->left);
        treeFree(root->right);
        free(root);
    }
}

void main() {
    Node *root = treeInitialize();
    root = treeInsert(root, itemCreat(131103628, "C Programming", 150, "Dennis Ritchie", "Prentice", 1988));
    root = treeInsert(root, itemCreat(856583719, "JavaScript: O Guia Definitivo", 180, "David Flanagan", "Bookman", 2012));
    treePrint(root);
    treeFree(root);
}
