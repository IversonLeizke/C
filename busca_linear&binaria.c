#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void bubbleSort(int vetor[], int maximo);
void preencherVetor(int vetor[], int tam);
void imprimirVetor(int vetor[], int tam);
void buscaLinear(int vetor[], int tam, int proc);
int buscaBinaria (int vetor[], int ini, int fim, int proc);

int contB = 0;

void main() {
    setlocale(LC_ALL, "Portuguese");
    int tam, proc, bb;
    printf("Insira o tamanho do vetor que deseja criar: ");
    scanf("%d", &tam);
    int vetor[tam];
    preencherVetor(vetor, tam);
    printf("Os valores inseridos no vetor s�o: ");
    imprimirVetor(vetor, tam);
    bubbleSort(vetor, tam);
    printf("Os valores no vetor ap�s ordena��o: ");
    imprimirVetor(vetor, tam);
    printf("Digite o valor que deseja procurar no vetor: ");
    scanf("%d", &proc);
    buscaLinear(vetor, tam ,proc);
    bb = buscaBinaria(vetor, 0, tam -1, proc);
    printf("Busca binaria: ");
    if (bb < 0) {
        printf("o valor n�o foi encontrado, foram realizadas %d compara��es.", contB);
    } else {
        printf("o valor foi encontrado na posi��o %d do vetor, ap�s %d compara��es.", bb, contB);
    }
}

int buscaBinaria (int vetor[], int ini, int fim, int proc) {
    int meio;
    contB++;
    if (fim >= ini) {
        meio = (ini + fim) /2;
        if (proc == vetor[meio]) {
            return meio;
        } else {
            if (proc < vetor[meio]) {
                buscaBinaria(vetor, ini, meio - 1, proc);
            } else {
                buscaBinaria(vetor, meio + 1, fim, proc);
            }
        }
    } else {
        return -1;
    }
}

void buscaLinear(int vetor[], int tam, int proc) {
    int ans = 0;
    printf("Busca linear: ");
    for (int c = 0; c < tam; c++) {
        if (vetor[c] == proc) {
            ans = c;
            break;
        }
    }
    if (ans == 0) {
        printf("o valor %d n�o foi encontrado no vetor, foram realizadas %d compara��es.\n", proc, tam);
    } else {
        printf("o valor %d foi encontrado na posi��o %d depois de % d compara��es.\n", proc, ans, ans + 1);
    }
}

void imprimirVetor(int vetor[], int tam) {
    for (int c = 0; c < tam; c++) {
        printf("%d ", vetor[c]);
    }
    printf("\n");
}

void preencherVetor(int vetor[], int tam) {
    for (int c = 0; c < tam; c++) {
        printf("Insira o valor para posi��o %d do vetor: ", c +1);
        scanf("%d", &vetor[c]);
    }
}

void bubbleSort(int vetor[], int maximo) {
    int tmp;
    for (int i = 0; i < maximo - 1; i++) {
        for (int j = i +1; j < maximo; j++) {
            if (vetor[i] > vetor[j]){
                tmp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = tmp;
            }
        }
    }
}
