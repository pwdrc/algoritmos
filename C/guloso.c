/*
Grupo

Amália Melo - 13692417
Grazielle Tomaz Neves - 13861176
Gabriel Henrique dos Santos - 13783972
Pedro Guilherme Tolvo - 10492012
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 10

void join(int N, char **reads);
int overlap(char* str1, char* str2);

int main() {

	// N: quantidade de reads (fragmentos de dna)
	int N;
	scanf("%d", &N);

	// reads
	// char * reads = (char *) malloc(N * sizeof(char));
	char reads[N][10];

	for(int i = 0; i < N; i++)
		scanf("%s", reads[i]);	

	
	for(int i = 0; i < N; i++) {
		 
	}
	
	return 0;
}

void join(int N, char **reads) {

	
}

int overlap(char* str1, char* str2) {

	int overlap_num;

	while(*str1 != '\0' && *str2 != '\0') {
		if(*str1++ == *str2++)
			overlap_num++;
	}
	return overlap_num;
}
