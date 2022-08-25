#include <stdio.h>
#define tamanho 3 

/* 

   O método de ordenação por seleção (selection sort) funciona a partir da repetição de dois passos:
   
   1. Encontrar o índice do menor elemento da sequência
   2. Colocar esse elemento na posição da qual se partiu

*/

int main () {

	int tamanhoDoVetor = 10;
	int vetor[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int indiceDoMenorElemento;
	int valorDoMenorElemento;

	for(int i = 0; i < tamanhoDoVetor; i++) {
		indiceDoMenorElemento = i;
		for(int j = i+1; j < tamanhoDoVetor; j++) {
			if(vetor[j] < vetor[indiceDoMenorElemento]) {
				indiceDoMenorElemento = j; // acha o indice do menor elemento e armazena na variavel indiceDoMenorElemento
			}
		}

		if(i != indiceDoMenorElemento) {
			valorDoMenorElemento = vetor[indiceDoMenorElemento];
			vetor[indiceDoMenorElemento] = vetor[i];
			vetor[i] = valorDoMenorElemento;
		}
	}

	for(int i = 0; i < tamanhoDoVetor; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
}


