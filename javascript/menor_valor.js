// Algoritmo para percorrer uma dada lista de objetos/elementos e identificar o menor valor:

const lista = require('./objetos');

let posicaoDoMenorValor = 0;

for (let i = 0; i < lista.length; i++) {

    if(lista[i].valor < lista[posicaoDoMenorValor].valor) {
        posicaoDoMenorValor = i;
    }
}

console.log(lista[posicaoDoMenorValor].valor);