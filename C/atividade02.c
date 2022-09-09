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

typedef struct {
    
    int n;
    int *elementos;
    int c;
    int t;

  } vetor;

void insertion(vetor *v);
void merge(int v[], int n);

int main() {
  
  int q;
  scanf("%d", &q);
 
  vetor v[q];

  for(int i = 0; i < q; i++) {
    scanf("%d", &v[i].n);
    v[i].elementos = (int*)malloc(v[i].n * sizeof(int));
    v[i].c = 0;
    v[i].t = 0;
  }

  for(int i = 0; i < q; i++) {
    for(int j = 0; j < v[i].n; j++)
      scanf("%d", &v[i].elementos[j]);
  }

  for(int i = 0; i < q; i++) {
    insertion(&v[i]);
    printf("I %d %d %d\n", v[i].n, v[i].t, v[i].c);
  }
} 

void insertion(vetor *v) {
  int key, y;
  for(int x = 0; x < v->n; x++) {
    key = v->elementos[x];
    y = x - 1;
    v->t++;

    while(y >= 0 && v->elementos[y] > key) {
      v->elementos[y+1] = v->elementos[y];
      y--;
      v->c++;
      v->t++;
    }
    v->elementos[y+1] = key;
    v->t++;
   }
}