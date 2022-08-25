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
#include <string.h>

void selecao();
void bolha();

int main() {
	
	char metodo[7];
	scanf("%s", metodo);
	//printf("%s", metodo);
	
	int tamanho;
	scanf("%d", &tamanho);

	int vetor[tamanho];
	for(int i = 0; i < tamanho; i++) {
		scanf("%d", &vetor[i]);
	}

	if(strcmp(metodo, "selecao") == 0)
	
	else if(strcmp(metodo, "bolha") == 0)

	else printf("nada");
}

