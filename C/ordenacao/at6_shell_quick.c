/* 

    Atividade 06 - ICC 2 - BSI - ICMC - USP - 2022

    Faça um programa em C que leia o número N de elementos de um vetor V.
    Após isso, leia os N elementos de V.
    
    O programa deve ordenar todos os subvetores de V utilizando os métodos Shell Sort e Quick Sort.
    Para cada subvetor de V, deve-se imprimir qual método fez menos operações (comparação + cópias), imprimindo 
    
    Q quando for o Quick Sort, 
    S quando for o Shell Sort e 
    o caractere hífen quando o número de contagens for igual. 
    
    O Shell deve utilizar os gaps no formato 2^k - 1, e 
    o Quick Sort deve utilizar o elemento do meio como pivô.

    Por exemplo, considere o seguinte vetor V: [3, 6, 5, 2]. 
    Os subvetores de V são: V1: [3], V2: [3, 6], V3: [3, 6, 5], e V4 = [3, 6, 5, 2]. 
    Para V1, o número de operações é o mesmo para os dois métodos. 
    Para V2, V3 e V4, o Shell Sort realiza menos operações. 
    Portanto, seu programa deve imprimir: - S S S

    Observações importantes:

    Somente comparações e trocas que envolvam elementos do vetor devem ser contadas. 
    Por exemplo, comparações do tipo i < fim não envolvem elementos do vetor, 
    ao contrário de comparações do tipo x > vetor[i], que envolve o vetor a ser ordenado.
    Considerar o conceito de "curto circuito" em C. 
    Por exemplo, na expressão if (i > 0 && v[i] > x), 
    quando i > 0 é falso, a comparação v[i] > x não é realizada.

*/
#include <stdio.h>

void shell(int v[], int n);
void quick(int v[], int f, int l);

int main() {

    // n: número de elementos do vetor v
    int n;
    scanf("%d", &n);

    // v: vetor a ser ordenado
    int v[n];

    // leitura dos n elementos de v
    for (int i = 0; i < n; i++)
        scanf("%d", &n[i]);

    // contadores
    // cs: contador do shell
    // cq: contador do quick
    // int cs = 0;
    // int cq = 0;

    // shell
    void shell(int v[], int n) {
        int gap = 1;
        while (gap <= n) {
            gap *= 2;
        }
        gap = gap / 2 - 1;
        while(gap > 0) {
            for (int i = gap; i < n; i += gap) {
                int x = v[i];
                int j = i - gap;
                while (j >= 0 && v[j] > x) {
                    v[j + gap] = v[j];
                    j -= gap;
                }
                v[j + gap] = x;
            }
            ga /= 2;
        }
    }

    // quick
    void quick(int v[], int f, int l) {
        if (f >= l) return;
        int m = (l + f)/2;
        int pivot = v[m];
        int i = f;
        int j = l;
        while(1) {
            while(v[i] < pivot)
                i++;
            while(v[j] > pivot)
                j--;
            if(i >= j)
                break;
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
        quick(v, f, j);
        quick(v, j+1, l);
    }

}