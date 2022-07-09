#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int contador=0;
void quickSort(int *A, int izq, int der) {
 //En C y C++ los arrays son punteros, por lo que hay que poner '*A'.
 int piv = A[izq];
 int i = izq;
 int j = der;
 int aux;

contador++;
 while (i < j) {
        contador++;
        contador++;
  while (A[i] <= piv && i < j)
  {i++;
  contador++;
  }
  contador++;
  while (A[j] > piv)
  {j--;
  contador++;
  }
  contador++;
  if (i < j) {
   aux  = A[i];
   A[i] = A[j];
   A[j] = aux;
   contador+=3;
  }
  contador++;
 }
contador++;
 A[izq] = A[j];
 contador++;
 A[j] = piv;
 contador++;
 if (izq<j - 1)
  {quickSort(A, izq, j - 1);
  contador++;
  }
  contador++;
 if (j + 1 <der)
 {
     quickSort(A, j + 1, der);
      contador++;
 }

}

int main() {
    unsigned t0, t1;
    int datos=0;
 int A[3000];
 do{cout<<"Digite el tamanio a ordenar: "; cin>>datos;
    cout<<endl;
    cout<<" Numeros desordenados "<<endl;
    for (int i = 0; i < datos; i++) {
            A[i]=1+rand()%(200);
            cout<<A[i]<< "\t";
    }
 cout << endl << " Y el array de valores ordenados es: " << endl;
 t0= clock();
 quickSort(A, 0, datos);
 t1= clock();

 for (int i = 1; i <= datos; i++) {
 // A[i] = rand();   Comento esto para que solo lo muestre.
  cout << A[i] << " ";
 }
 double time = (double(t1 -t0) / CLOCKS_PER_SEC);
 cout<<endl;
 cout<<endl;
 cout<<"Para ordenar "<< datos <<" elementos se necesitos de "<< contador <<" pasos "<<endl;
 cout<<"En un tiempo de  "<< time << " segundos" << endl;
  cout<<endl;
  cout<<"El tiempo mediante formula "<<datos*10<<endl;
 system("pause");
 system("cls");
 contador=0;
 }while(datos !=0);
 return 0;
}



/*#include <iostream>  //para cin y cout
#include <stdlib.h>  //para el rand()
#include <ctime>
using namespace std;

void quickSort(int *A, int izq, int der) {
 //En C y C++ los arrays son punteros, por lo que hay que poner '*A'.
 int piv = A[izq];
 int i = izq;
 int j = der;
 int aux;
int contador=0;
contador++;
 while (i < j) {
        contador++;
        contador++;
  while (A[i] <= piv && i < j)
  {i++;
  contador++;
  }
  while (A[j] > piv)
  {j--;
  contador++;
  }
  contador++;
  if (i < j) {
   aux  = A[i];
   A[i] = A[j];
   A[j] = aux;
   contador+=3;
  }
  contador++;
 }
contador++;
 A[izq] = A[j];
 contador++;
 A[j] = piv;
 contador++;
 if (izq<j - 1)
  {quickSort(A, izq, j - 1);
  contador++;
  }
  contador++;
 if (j + 1 <der)
 {
     quickSort(A, j + 1, der);
      contador++;
 }
  cout<<" pasos: " << contador<<endl;
}

int main() {
    unsigned t0, t1;
 int A[10];
 cout << " El array de valores es: " << endl;
 for (int i = 0; i < 10; i++) {
  A[i] = rand();
  cout << A[i] << " ";
 }
 cout << endl << " Y el array de valores ordenados es: " << endl;
 t0= clock();
 quickSort(A, 0, 9);
 t1= clock();

 for (int i = 0; i < 10; i++) {
 // A[i] = rand();   Comento esto para que solo lo muestre.
  cout << A[i] << " ";
 }
 double time = (double(t1 -t0) / CLOCKS_PER_SEC);
 cout<<endl;
 cout<<endl;
 cout<<"Tiempo "<< time << " segundos" << endl;
  cout<<endl;
  cout<<"El tiempo mediante formula "<<10*10<<endl;
 system("pause > nul");
 return 0;
}

*/
