const elementos = require('../objetos');
const menorValor = require('../menor_valor/menor_valor');

for(let i = 0; i < elementos.length; i++) {
    if(arr[i].valor < arr[menorValor].valor) {
        menorValor = i;
    }
    return menorValor;
}
