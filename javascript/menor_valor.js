// Algoritmo para percorrer uma dada lista de números e identificar o menor valor:

const lista = [10, 20, 40, 100, 1, 30, -1, 4, 5];

let posicaoDoMenorValor = 0;

for (let i = 0; i < lista.length; i++) {

    if(lista[i] < lista[posicaoDoMenorValor]) {

        posicaoDoMenorValor = i;

    }
}

console.log(lista[posicaoDoMenorValor]);