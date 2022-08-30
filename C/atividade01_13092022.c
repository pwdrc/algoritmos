/*

  	Instruções:

	Atividade:

	Faça um programa em C que receba o nome do método de ordenação (no caso, selecao ou bolha), o número N de elementos de um vetor. 
	Após isso, leia os N elementos e imprima as indicações de todas as comparações e trocas realizadas pelo método escolhido, seguido do vetor ordenado.

	As comparações e trocas devem ser impressas de acordo com os índices dos elementos envolvidos na operação. 
	Por exemplo, se o elemento do índice 3 foi comparado com o elemento do índice 7, então deve-se imprimir C 3 7. 
	Se o elemento de índice 2 foi trocado com o elemento de índice 5, deve-se imprimir T 2 5. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selecao(int vetor[], int tamanho);
void bolha(int vetor[], int tamanho);

int main() {
	
	char metodo[10];
	scanf("%99[^\n]", metodo);
	
	int tamanho;
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	for(int i = 0; i < tamanho; i++)
		scanf("%d", &vetor[i]);
	
	if(strcmp(metodo, "selecao") == 0) 
		selecao(vetor, tamanho);		
	else if(strcmp(metodo, "bolha") == 0)
		bolha(vetor, tamanho-1);
	
	for(int i = 0; i < tamanho; i++)
		printf("%d ", vetor[i]);
}

void selecao(int vetor[], int tamanho) {
	
	int menor, aux;
	for(int i = 0; i < tamanho; i++) {
		menor = i;
		for(int j = i+1; j < tamanho; j++) {
			// comparação
			printf("C %d %d \n", menor, j);
			if(vetor[j] < vetor[menor]) {
				menor = j;
			}
		}		
		
		if(i != menor) {
			// troca
			printf("T %d %d\n", i, menor);
			aux = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = aux;
		}
	}
}

void bolha(int vetor[], int tamanho) {

	if(tamanho < 1)
		return;

	for(int i = 0; i < tamanho; i++) {
		//compara
		printf("C %d %d\n", i, i+1);
		if(vetor[i] > vetor[i+1]) {
			// troca
			printf("T %d %d\n", i, i+1);
			int aux = vetor[i];
			vetor[i] = vetor[i+1];
			vetor[i+1] = aux;
		}
	bolha(vetor, tamanho-1);
	}
}