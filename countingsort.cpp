#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int contador=0;
void display(int *array, int size) {
    contador++;
   for(int i = 1; i<=size; i++)

     {
        contador++;
        cout << array[i] << " ";

        contador++;
     }
cout << endl;


}

int getMax(int array[], int size) {
   int max = array[1];
   contador++;
   for(int i = 2; i<=size; i++) {
        contador++;
        contador++;
        if(array[i] > max)
        {
         max = array[i];
         contador++;
        }
         contador++;

   }

     return max; //the max element from the array

}

void countSort(int *array, int size) {
   int output[size+1];
   int max = getMax(array, size);
   int count[max+1]; //create count array (max+1 number of elements)
    contador++;
   for(int i = 0; i<=max; i++)
     {contador++;
         count[i] = 0; //initialize count array to all zero
          contador++;
     }
            contador++;
   for(int i = 1; i <=size; i++)
      {
          contador++;
          count[array[i]]++; //increase number count in count array.
          contador++;
      }

            contador++;
   for(int i = 1; i<=max; i++)

     {contador++;
        count[i] += count[i-1]; //find cumulative frequency
            contador++;
     }
            contador++;
   for(int i = size; i>=1; i--) {
        contador++;
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1; //decrease count for same numbers

          contador+=2;
            contador++;
   }
contador++;
   for(int i = 1; i<=size; i++) {
              contador++;
      array[i] = output[i]; //store output array to main array
      contador++;
      contador++;
   }

}

int main() {
    srand(time(NULL));
    unsigned t0, t1;
   int n;
   int arr[30000];
   do{
    cout<<"Digite el tamanio a ordenar: "; cin>>n;
    for (int i = 1; i <=n+1; i++) {
             arr[i]=1+rand()%(100);
    }
    cout<<endl;

   cout << "Elementos desordenados: ";
    t0= clock();
   display(arr, n);
   countSort(arr, n);
 t1= clock();
   cout << "Elementos ordenados: ";
   display(arr, n);
   double time = (double(t1 -t0) / CLOCKS_PER_SEC);
 cout<<endl;
 cout<<endl;
 cout<<"Para ordenador "<< n <<" elementos se necesita "<< contador<<" pasos " <<endl;
 cout<<"En un tiempo de "<< time << " segundos" << endl;

  cout<<endl;
  system("pause");
  system("cls");
   contador=0;
   }while(n!=0);


}
