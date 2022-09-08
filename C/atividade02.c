/*

Faça um programa em C que receba o número Q de vetores. 
Após isso, deve ser lido o tamanho N de cada um dos Q vetores. 
Em seguida, leia cada vetor. 
O programa deve ordenar os vetores utilizando os método de inserção e merge. 
Ao final deve-se imprimir o número de trocas e comparações 
realizadas por ambos os métodos em cada vetor, 
conforme a seguinte formatação: 
“M N T C”, 
onde M é o método (I para inserção e M para merge), 
N é o tamanho do vetor, 
T é o número de trocas e 
C é o número de comparações.

Observações importantes:

 - Somente comparações e trocas que envolvam elementos do vetor devem ser contadas. 
   Por exemplo, comparações do tipo i < fim não envolvem elementos do vetor, 
   ao contrário de comparações do tipo x > vetor[i], que envolve o vetor a ser ordenado.
    
    
 - Considerar o conceito de "curto circuito" em C. 
   Por exemplo, na expressão if (i > 0 && v[i] > x), 
   quando i > 0 é falso, a comparação v[i] > x não é realizada.

*/
#include<stdio.h>
#include<stdlib.h>

void insertion(int v[], int n, int c, int t);
void merge(int v[], int n);

int main() {
  
  // q: número de vetores
  int q;
  scanf("%d", &q);
 
  // struc com o tamanho e os elementos de cada vetor
  typedef struct {
    // n: tamanho
    int n;
    // conteúdo
    int *elementos;
  } vetor;

  vetor v[q];

  // c: número de comparações
  // t: número de trocas
  int c = 0;
  int t = 0;
  
  for(int i = 0; i < q; i++) {
    scanf("%d", &v[i].n);
    v[i].elementos = (int*)malloc(v[i].n * sizeof(int));
  }

  for(int i = 0; i < q; i++) {
    for(int j = 0; j < v[i].n; j++)
      scanf("%d", &v[i].elementos[j]);
  }

  for(int i = 0; i < q; i++) {
    for(int j = 0; j < v[i].n; j++) {
      insertion(v[i].elementos, v[i].n, c, t);
      printf("I %d %d %d\n", v[i].n, t, c);
    }
  }
} 

void insertion(int v[], int n, int c, int t) {
  int key, j;
  for(int i = 0; i < n; i++) {
    key = v[i];
    j = i - 1;
    c++;

    while(j >= 0 && v[j] > key) {
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key;
    t++;
  }
}