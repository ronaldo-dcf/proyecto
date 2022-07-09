//METODO BUBLE SORT
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void imprimir(int elementos[], string titulo, int tam)
{
    cout<<titulo<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout << elementos[i] << "\t";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    unsigned t0, t1;
    int contador = 0;
    int elementos[30000];
    int tam=0;

    do{
    cout<<"Digite el tamanio a ordenar: "; cin>>tam;
        for (int i = 0; i < tam; i++) {
            elementos[i]=1+rand()%(200);
       }
    cout<<endl;
    imprimir(elementos,"Elementos desordenados",tam);

    t0= clock();
    /*clock_t t;
    t=clock();
    */
    contador++;
    for (int i = 0; i < tam; i++)
    {
        contador++;
        contador++;
        for (int j = 0; j < tam - 1; j++)
        {
            contador++;
            /*imprimir(elementos,("Comparando los elementos "));*/
            contador++;
            if (elementos[j] < elementos[j + 1])   //el orden de los elementos (descendente [<], ascendente [>])
            {
                elementos[j] = elementos[j] + elementos[j + 1];
                elementos[j + 1] = elementos[j] - elementos[j + 1];
                elementos[j] = elementos[j] - elementos[j + 1];
                contador +=3;
                //intercambio
                /*int temp = elementos[j];
                elementos[j] = elementos[j + 1];
                elementos[j + 1] = temp;*/
            }
            contador++;
        }
        contador++;
    }
    t1= clock();
    cout<<endl;
    imprimir(elementos,"Elementos ordenados",tam);
    double time = (double(t1 -t0) / CLOCKS_PER_SEC);
    cout<<endl;
    cout<<"Para ordenar "<< tam << " elementos se requiero "<< contador << " pasos. Tiempo "<< time << " segundos" << endl;
    //cout<<"Para ordenar "<< tam << " elementos se requiero "<< contador << " pasos. Tiempo "<< float(t)/CLOCKS_PER_SEC<< " segundos" << endl;
    system("pause");
    system("cls");
    //t=clock()-t;
    contador=0;
    }while(tam !=0);

}
