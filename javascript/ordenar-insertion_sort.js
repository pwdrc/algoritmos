const elementos = require('./objetos');

function insetionSort(lista) {
    
    for (let i = 0; i < lista.length; i++) {
        let analise = i;
        while (analise > 0 && lista[analise].valor < lista[analise - 1].valor) {
            
            let elementoAnalise = lista[analise];
            let elementoAnterior = lista[analise - 1];

            lista[analise] = elementoAnterior;
            lista[analise - 1] = elementoAnalise;

            analise--;
        }
    }
    console.log(lista);
}

insetionSort(elementos);