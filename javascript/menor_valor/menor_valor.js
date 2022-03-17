// Algoritmo para percorrer uma dada lista de objetos e identificar o menor valor:

const elementos = require('./objetos');

let menorValor = 0;

for (let i = 0; i < elementos.length; i++) {

    if(elementos[i].valor < elementos[menorValor].valor) {

        menorValor = i;

    }
}

console.log(`O elemento ${elementos[menorValor].elemento} possui o menor valor, que é ${elementos[menorValor].valor}.`);