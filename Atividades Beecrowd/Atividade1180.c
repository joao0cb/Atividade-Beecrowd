#include <stdio.h>5


void preencherVetor(int X[], int N);
int buscarMenorValor(int X[], int N, int *pos);

int main() {
    int N, menor, pos = 0;
    do {
        printf("Qual o tamanho do vetor que você deseja? (1 < N < 1000)\n");
        scanf("%d", &N);
    } while(N <=0);
    int X[N];
    preencherVetor(X, N);
    menor = buscarMenorValor(X, N, &pos);
    printf("Menor valor: %d", menor);
    printf("Posicao: %d", pos);
}

void preencherVetor(int X[], int N) {
    for(int i = 0; i < N; ++i) {
        scanf("%d", &X[i]);
    }
}

int buscarMenorValor(int X[], int N, int *pos) {
    int menor = X[0];
    for(int i = 1; i < N; ++i) {
        if(X[i] < menor) {
            menor = X[i];
            *pos = i;
        }
    } return menor;
}