#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
using namespace std;
//!Funcion que une  el array
int contador=0;
void merge_aux(int *arr, int abajo, int alto, int medio)
{
    int i, j, k, c, elementos[30000];
    i = abajo;
    k = abajo;
    j = medio + 1;
    /*el  bucle se ejecuta mientras que el i que tiene el  valor de(abajo)
     sea menor o igual a la  mitad del  array(medio) y el  valor
     de j que tiene el valor del  (medio) de el array sea menor  o  igual al final  del array(alto) */
      contador++;
      contador++;
    while (i <= medio && j <= alto) {
             contador++;
            /*si la posicion i=>(inicial) es menor a j=>medio del array
            se cumple que la posicion  inicial(k) toma el valor del (i) de el otro array dividido
            a la vez que k,i aumentan su valor en  +1*/
            //!Funcion Ordenamiento de mayor a menor.
            contador++;
        if (arr[i] > arr[j]) {
            elementos[k] = arr[i];
            k++;
            i++;
    contador++;
        }
            /*caso contrario elementos en  posicion(k) que inicia en  abajo ,toma el
            valor de  arr(medio o j)*/
        else  {
            elementos[k] = arr[j];
            k++;
            j++;
            contador++;
        }
    }
    //casos similares
    contador++;
    while (i <= medio) {
        elementos[k] = arr[i];
        k++;
        i++;
        contador++;
    }
    contador++;
    while (j <= alto) {
        elementos[k] = arr[j];
        k++;
        j++;
        contador++;
    }
    //bucle que devuelve los datos acumulados en elemento al array  original
    contador++;
    for (i = abajo; i < k; i++)  {
            contador++;
        arr[i] = elementos[i];
            contador++;
            contador++;
    }

}
//!Funcion que divide el  array en partes
void merge_sort(int *arr, int abajo, int alto)
{
    //!nuevo dato  medio  que referencia la mitad del  array
    int medio;
    /*!S se comple que la posicions  inicial(abajo) del array es
    menor que la  posicion final(alto) del array entonces ingresa a la condicion
    que divide los el array llamando  a las dos funciones merge - merge_sort
    de  forma recursiva */
    contador++;
    if (abajo < alto ){
        //divide el array
        medio=(abajo +alto)/2;
        //se llama recursivamente   con el  array ya dividido
        merge_sort(arr,abajo,medio);
        merge_sort(arr,medio+1,alto);
        //Funcion  que une el  array  dividido  anteriormente
        merge_aux(arr,abajo,alto,medio);
        contador+=4;
    }
}
//!Funcion principal
int main()
{
    srand(time(NULL));
    unsigned t0, t1;
    //!variables de tamanio del array  y num
    int myarray[30000], num;
    do{

    cout<<"Cantidad de numeros a  ingresara?   =>";
    cin>>num;
    cout<<"-------------------------------------"<<endl;
    //!Bucle que pide  los datos que se van a ingresar/
    cout<<"Elementos desordenados: "<<endl;
    for (int i = 0; i < num; i++) {
            myarray[i]=1+rand()%(5130);
            cout<<myarray[i]<<" \t";
    }
    cout<<endl;
    /*!se llama a la funcion merge_sort con los parametros =>
    cantidad de numeros a ingresar |posicion inicial (abajo)|y  el  tamanio
    final del  array(alto):*/
    t0= clock();
    merge_sort(myarray, 0, num-1);
    t1= clock();
    //!impresion del array resultante
    cout<<endl;
    cout<<"Array Ordenado \n";
    cout<<"---------------------------"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
    double time = (double(t1 -t0) / CLOCKS_PER_SEC);
    cout<<endl;
    cout<<endl;
    cout<<"Para ordenar "<< num << " elementos  se necesita de "<< contador << " paso " <<endl;
    cout<<endl;
    cout<<"En un tiempo de: "<<time<< " segundos" << endl;

    /*float total=0;
    cout<<endl;
    cout<<"El tiempo de ejecucion es: ";
    total=num*(log10(num));
    cout<<total<<endl;
    */
    system("pause");
    system("cls");
    contador=0;
    }while(num!=0);


}

