const elementos = require('./objetos');
const posicaoMenorValor = require('./menor_valor');

elementos.forEach((_, posicao) => {
    let menor = posicaoMenorValor(elementos, posicao)
   
    let posicaoAtual = elementos[posicao];
    let menorElemento = elementos[menor];
   
    elementos[posicao] = menorElemento;
    elementos[menor] = posicaoAtual; 
   })
   
   console.log(elementos)