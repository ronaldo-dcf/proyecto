var pasos=0;
function countingSort(datos, minimo, maximo) {
    let contadores = [];
    let contador = 0;
pasos++;
    for (let i = 0; i < maximo; i++) {
        pasos++;
        contadores[i] = 0;
        pasos++;
        pasos++;
    }
    pasos++;
    for (let i = 0; i < maximo; i++) {
        contadores[datos[i]]++;
        pasos++;
        pasos++;
        pasos++;
    }
    pasos++;
    for (let i = minimo; i <= maximo; i++) {
        pasos++;
        pasos++;
        while (contadores[i]-- > 0) {
            datos[contador++] = i;
            pasos++;
            pasos++;
        }
        pasos++;
    }

    return datos;
}

let primos = [13, 2, 19, 5, 3, 7, 11, 23];
console.log(primos);

console.log();

let resultado = countingSort(primos, 2, 23);
console.log(resultado);
console.log(contador);
