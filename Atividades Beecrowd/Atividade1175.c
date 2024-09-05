#include <stdio.h>

void preencherVetor(int N[], int TAM);
void trocarValores(int N[], int TAM);
void printarVetor(int N[], int TAM);

int main() {
    int TAM = 20;
    int N[20];
    preencherVetor(N, TAM);
    trocarValores(N, TAM);
    printarVetor(N, TAM);
    
    return 0;
}

void preencherVetor(int N[], int TAM) {
    int i, valor;
    for(i = 0; i < TAM; ++i) {
        scanf("%d", &valor);
        N[i] = valor;
    }
}

void printarVetor(int N[], int TAM) {
    for(int i = 0; i < TAM; ++i) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    printf("\n");
}

void trocarValores(int N[], int TAM) {
    int esq = 0, dir = TAM-1, i, temp;
    while(esq < dir) {
        temp = N[esq];
        N[esq] = N[dir];
        N[dir] = temp;
        ++esq;
        --dir;
    }
}