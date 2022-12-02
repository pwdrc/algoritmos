#include <stdio.h>
#include <stdlib.h>

void swap(int *elemento_1, int *elemento_2);
void bubbleSort(int *vetor, int tamanho);

int main() {

    int tamanho, *vetor;
    scanf("%d", &tamanho);
    vetor = malloc(tamanho*sizeof(int));

    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tamanho-1);

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;

}

void bubbleSort(int *vetor, int tamanho) {

    if(tamanho < 1)
        return;

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] > vetor[i+1])
            swap(&vetor[i], &vetor[i+1]);
        bubbleSort(vetor, tamanho-1);
    }

}

void swap(int *elemento_1, int *elemento_2) {

    int aux = *elemento_1;
    *elemento_1 = *elemento_2;
    *elemento_2 = aux;

}