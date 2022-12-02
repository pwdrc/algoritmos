/*
	Faça um programa em C que leia um número inteiro M que indica a capacidade da tabela, criando-a em seguida. Após isso, seu programa deverá:
    
		- Ler um número inteiro N que indica o total de inserções na tabela, seguido da leitura e inserção dos N elementos lidos (inteiros e não negativos), utilizando a estratégia linear para sondagem. Não é permitido a inserção de números repetidos na tabela.

		- Ler um número inteiro D que indica o total de remoções na tabela, seguido da leitura e remoção de cada elemento informado.

		- Ler um número inteiro B que indica o total de buscas na tabela. Após isso, deve-se ler B elementos e buscar cada um na tabela, imprimindo o índice da tabela onde ele se encontra. Se não for encontrado, deve-se imprimir -1

*/

#include <stdio.h>

int hash(int key);

int main() {
	
	// M: capacidade da tabela
	int M;
	scanf("%d", &M);

	// cria tabela de tamanho M
	int tabela[M];

	// N: total de inserções da tabela
	int N;
	scanf("%d", &N);
	
	// leitura dos elementos da tabela
	for(int i = 0; i < N; i++)
		scanf("%d", tabela[M];

}

int hash_sondagemLinear(int key) {

	return key % M

}
