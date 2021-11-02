#include <stdio.h>
#include <stdlib.h>

struct item {
    int cod;
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

Item itemCreat(int cod) {
    Item item;
    item.cod = cod;
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
        if (x.cod > root->item.cod) {
            root->right = treeInsert(root->right, x);
        }
        else {
            root->left = treeInsert(root->left, x);
        }
    }
}

void treePrint(Node *root) {
    if (root != NULL) {
        printf("%d ", root->item.cod);
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

Node *treeSearch(Node *root, int cod) {
    if (root != NULL) {
        if (root->item.cod == cod)
            return root;
        else {
            if (cod > root->item.cod) {
                return treeSearch(root->right, cod);
            }
            else {
                return treeSearch(root->left, cod);
            }
        }
    }
    return NULL;
}

Node *treeMin(Node *root) {
    if (root != NULL) {
        Node *aux = root;
        while (aux->left != NULL){
            aux = aux->left;
        }
        return aux;
    }
    return NULL;
}

Node *treeRemove(Node *root, int cod) {
    if (root != NULL) {
        if (cod > root->item.cod) {
            root->right = treeRemove(root->right, cod);
        } else if (cod < root->item.cod) {
            root->left = treeRemove(root->left, cod);
        } else {
            if (root->left == NULL && root->right == NULL) {
                free(root);
                return NULL;
            } else if (root->left == NULL && root->right != NULL) {
                Node *aux = root->right;
                free(root);
                return aux;
            } else if (root->left != NULL && root->right == NULL) {
                Node *aux = root->left;
                free(root);
                return aux;
            } else {
                Node *aux = treeMin(root->right);
                Item itemAux = aux->item;
                root = treeRemove(root, itemAux.cod);
                root->item = itemAux;
                return root;
            }
        }
    }
}

void main() {
    Node *root = treeInitialize();
    root = treeInsert(root, itemCreat(10));
    root = treeInsert(root, itemCreat(20));
    root = treeInsert(root, itemCreat(5));
    root = treeInsert(root, itemCreat(8));
    root = treeInsert(root, itemCreat(30));
    root = treeInsert(root, itemCreat(18));
    treePrint(root);
    treeRemove(root, 10);
    printf("\n");
    treePrint(root);
    Node *tmp = treeSearch(root, 50);
    if (tmp == NULL) printf("Elemento não encontrado!");
    else printf("Elemento encontrado!");
    treeFree(root);
}
