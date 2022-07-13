// Ejercicio 1001: Definir una función implementar el algoritmo de ordenamiento merge-sort.
var contador=0;
Array.prototype.mergeSort = function() {
    contador++;
    if (this.length <= 1) {
        return this;
    }
    let mitad = parseInt(this.length / 2);
    let izquierda = this.slice(0, mitad).mergeSort();
    let derecha = this.slice(mitad, this.length).mergeSort();
contador+=3;
contador++;
    let merge = function(izquierda, derecha) {
        let datos = [];
        contador++;
        contador++;
        contador++;
        while(izquierda.length > 0 && derecha.length > 0) {
            contador++;
            datos.push(izquierda[0] <= derecha[0] ? izquierda.shift() : derecha.shift())
            contador++;
        }
        contador++;
        return datos.concat(izquierda).concat(derecha);
    }
    contador++;
    return merge(izquierda, derecha);
}

let numeros = [11, 7, 19, 3, 23, 2, 5, 29, 23];
console.log(numeros);
numeros.mergeSort();
console.log(numeros);
console.log();

let resultado = numeros.mergeSort();
console.log(resultado);
console.log(contador);