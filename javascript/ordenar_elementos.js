// ordena elementos em ordem crescente

const elementos = require('./objetos');
const posicaoMenorValor = require('./menor_valor');

for(let i = 0; i < elementos.length; i++) {
    let menor = posicaoMenorValor(elementos, i);
    let elementoAtual = elementos[i];
    let elementoMenorValor = elementos[menor];

    elementos[i] = elementoMenorValor;
    elementos[menor] = elementoAtual;
}

console.log(elementos);