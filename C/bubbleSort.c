#include <stdio.h>

void bubbleSort(int vet[], int n); // n representa o tamanho do vetor a ordenar

int main() {
	
	int n = 10;
	int vet[] = {2, 1, 9, 0, 31, 4, 5, 4, 3, 2};
	
	bubbleSort(vet, n);

	for(int i = 0; i < 10; i++) {
		printf("%d ", vet[i]);
	}
}

void bubbleSort (int vet[], int n) {

	if(n <= 1)
		return;

	for(int i = 0; i < n; i++) {
		int aux;
		if(vet[i+1] < vet[i]) {
			aux = vet[i];
			vet[i] = vet[i+1];
			vet[i+1] = aux;
		}
	}

	bubbleSort(vet, n-1);
}
