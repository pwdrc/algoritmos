/*
	Faça um programa em C que leia um número inteiro M que indica a capacidade da tabela, criando-a em seguida. Após isso, seu programa deverá:
    
		- Ler um número inteiro N que indica o total de inserções na tabela, seguido da leitura e inserção dos N elementos lidos (inteiros e não negativos), utilizando a estratégia linear para sondagem. Não é permitido a inserção de números repetidos na tabela.

		- Ler um número inteiro D que indica o total de remoções na tabela, seguido da leitura e remoção de cada elemento informado.

		- Ler um número inteiro B que indica o total de buscas na tabela. Após isso, deve-se ler B elementos e buscar cada um na tabela, imprimindo o índice da tabela onde ele se encontra. Se não for encontrado, deve-se imprimir -1

*/

#include <stdio.h>

void inserir(int * tabela, int elemento, int M);
void remover(int * tabela, int elemento, int M);
int buscarElemento(int * tabela, int elemento, int M);

int main() {
	
	// M: capacidade da tabela
	int M;
	scanf("%d", &M);

	// cria tabela de tamanho M
	int tabela[M];

	// coloca todos os valores iguai a -1
	// serve para facilitar a implementação do hash
	// posição == -1: posição vazia e pode receber novas informações
	for(int i = 0; i < M; i++)
		tabela[i] = -1;

	// N: total de inserções da tabela
	int N;
	scanf("%d", &N);

	for(int i = 0; i < N; i++) {
		int elemento;	
		scanf("%d", &elemento);
		inserir(tabela, elemento, M);
		
	}

	// D: total de remoções a serem realizadas na tabela
	int D;
	scanf("%d", &D);

	int paraRemover;
	for(int i = 0; i < D; i++) {
		
		scanf("%d", &paraRemover);
		remover(tabela, paraRemover, M);
	}


	// B: número de buscas
	int B;
	scanf("%d", &B);

	int paraBuscar;
	for(int i = 0; i < B; i++) {
		
		scanf("%d", &paraBuscar);
		printf("%d ", buscarElemento(tabela, paraBuscar, M));
	}
	
	return 0;
}

void inserir(int * tabela, int elemento, int M) {

	int posicao;
	for(int i = 0; i < M; i++) {

		// hashing
		posicao = (elemento + i) % M;
		
		if(tabela[posicao] == elemento)
			return;
			
		else if(tabela[posicao] == -1) {
			tabela[posicao] = elemento;
			return;
		}

		else return;
	}
}

void remover(int * tabela, int elemento, int M) {

	int posicao = buscaElement(tabela, elemento, M);
	for(int i = 0; i < M; i++) {
		if(posicao != -1)
			tabela[posicao] = -1;
	}
}


int buscarElemento(int * tabela, int elemento, int M) {

	int posicao;
	for(int i = 0; i < M; i++) {
		posicao = (elemento + i) % M;
		if(tabela[posicao] == elemento)
			return posicao;
	}
	return -1;
}
