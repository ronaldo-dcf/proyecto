#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){

    srand(time(NULL));
    unsigned t0, t1;
    int numeros[3000],aux,pos=0;
    int contador=0;
    int dato=0;
    do{cout<<"Digite el tamanio a ordenar: "; cin>>dato;
    cout<<endl;
    cout<<" Numeros desordenados "<<endl;
    for (int i = 0; i < dato; i++) {
            numeros[i]=1+rand()%(200);
            cout<<numeros[i]<< "\t";
    }
   cout<<endl;
    t0= clock();
    contador++;
    for (int i = 0; i < dato; i++)
    {
        contador++;
        pos=i;
        aux=numeros[i];
        contador++;
        contador++;
        contador++;
        contador++;
        while ( (pos>0) && (numeros[pos-1]>aux) )
        {
            numeros[pos]=numeros[pos-1];
            pos--;
            contador++;
            contador++;
        }
        numeros[pos]=aux;
        contador++;
    }
    t1= clock();
    cout<<endl;
    std::cout<<" Numero ordenados de forma acendente:\n";
    for (int i = 0; i < dato; i++)
    {
        std::cout<< numeros[i] <<" \t";
    }
    cout<<endl;
    std::cout<<" Numero ordenados de forma decendente:\n";
    for (int i = dato-1; i >= 0; i--)
    {
        std::cout << numeros[i] <<" \t";
    }
    cout<<endl;
double time = (double(t1 -t0) / CLOCKS_PER_SEC);
 cout<<endl;
 cout<<"Para ordenar  "<< dato << " elementos se necesita "<< contador <<" pasos " <<endl;
 cout<<endl;
 cout<<" En un tiempo de " << time << " segundos" << endl;

    system("pause");
    system("cls");
    contador=0;
    }while(dato != 0);
    return 0;
}
