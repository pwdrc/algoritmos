// Algoritmo para percorrer uma dada lista de objetos/elementos e identificar o menor valor:

const lista = require('./objetos');

function apontaMenorValor(arr, posicaoInicial) {
    
    let menorValor = posicaoInicial;

    for(let i = posicaoInicial; i < arr.length; i++) {
        if(arr[i].valor < arr[menorValor].valor) {
            menorValor = i;
        }
    }
    return arr[menorValor].valor;
}

teste = apontaMenorValor(lista, 0);
console.log(teste);
