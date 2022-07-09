/**
 *Nombre del programa: METODOS DE ORDENAMIENTO
 *Descripción: Este menu de ordenamiento contiene los 10 metodos de ordenamiento del libro de cairo ,aqui se podra mostrar
 * cual es el mas rapido, cual es el mas lento .
 * La forma que utilize para hallar el tiempo de cada ordenamiento para un mismo vector que tenga los mismos
 * elementos aleatorios es ir al subprograma leerVector y poner en comentario a random cosa que siempre me
 * va mostrar el mismo vector con los mismos elementos y por eso ya con el mismo vector generado siempre que
 * compilo puedo distribuir el tiempo y saber quien es el mas rapido o mas lento.
 *Autor: Anton ramirez,leonardo vladimir(20090231A)
 *Fecha: 05/10/2010
 *
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 #include <time.h>
#define Max 120000
#define TOPE 1000
#define randomize (srand(time(0)))
#define random(num) (rand()%(num))

using namespace std;

int METODODEORDENAMIENTO();
void leerVector(int X[Max],int *dimX);
void mostrarVector(int X[Max],int dimX);
void ordenarxBurbuja(int X[Max],int dimX);
void ordenarxBurbuja_senal(int X [Max],int *dimX);
void ordenarxShaker_sort(int X[Max],int *dimX);
void ordenarxInsercion_directa(int X[Max],int *dimX);
void ordenarxInsercion_binaria(int X[Max],int *dimX);
void ordenarxSeleccion_directa(int X[Max],int dimX);
void ordenarxShell(int X[Max],int *dimX);
void ordenarxQuicksort_recursivo(int X[Max],int *dimX);
void Reduce_recursivo(int X[Max],int INI,int FIN);
void ordenarxQuicksort_iterativo(int X[Max],int *dimX);
int Reduce_iterativo(int X[Max],int INI,int FIN);
void ordenarxHeapsort(int X[Max],int *dimX);
void Inserta_monticulo(int X[Max],int *dimX);
void Elimina_monticulo(int X[Max],int *dimX);

int main()
{
 int Opcion,A[Max],na;
 do{
 Opcion = METODODEORDENAMIENTO();
 switch(Opcion)
 {
 case 1: {
 system("cls");
 printf("\n*******************Proceso de Lectura del Vector Aleatorio********************\n\n");
 leerVector(A,&na);
 system("pause");
 system("cls");
 break;
 }
 case 2: {
 system("cls");
 printf("\n****************Mostramos el Vector Aleatorio Generado***********************\n\n");
 mostrarVector(A,na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 3: {
 system("cls");
 printf("\n******************Ordenamiento por el Metodo de Burbuja************************\n\n");
 ordenarxBurbuja(A,na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 4: {
 system("cls");
 printf("\n**************Ordenamiento por el Metodo de Burbuja con Senal****************\n\n");
 ordenarxBurbuja_senal(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 5: {
 system("cls");
 printf("\n***************Ordenamiento por el Metodo de Shaker sort**********************\n\n");
 ordenarxShaker_sort(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 6: {
 system("cls");
 printf("\n***************Ordenamiento por el Metodo de Insercion Directa*****************\n\n");
 ordenarxInsercion_directa(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 7: {
 system("cls");
 printf("\n*******************Ordenamiento por el Metodo de Insercion Binaria************\n\n");
 ordenarxInsercion_binaria(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 8:{
 system("cls");
 printf("\n***************Ordenacion por el Metodo de Seleccion Directa******************\n\n");
 ordenarxSeleccion_directa(A,na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 9:{
 system("cls");
 printf("\n******************Ordenamiento por el Metodo de Shell**************************\n\n");
 ordenarxShell(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 10:{
 system("cls");
 printf("\n**************Ordenamiento por el Metodo Quicksort Recursivo*******************\n\n");
 ordenarxQuicksort_recursivo(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 11:{
 system("cls");
 printf("\n*************Ordenamiento por el Metodo Quicksort Iterativo*********************\n\n");
 ordenarxQuicksort_iterativo(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 case 12:{
 system("cls");
 printf("\n************************Ordenamiento por el Metodo del Monticulo****************\n\n");
 ordenarxHeapsort(A,&na);
 printf("\n\n");
 system("pause");
 system("cls");
 break;
 }
 }
 }while(Opcion != 0);
 return(0);
}

int METODODEORDENAMIENTO()
{
 int i;
 do
 {
 system("cls");
 printf("================================================================================\n");
 cout << "----------------M E T O D O S D E O R D E N A M I E N T O S-----------------";
 printf("================================================================================\n");
 cout << "\n ESCOJER EL MEJOR METODO PARA ORDENAR UN VECTOR: ";
 cout << "\n\n\r 0.- TERMINAR";
 cout << "\n\r 1.- LEER VECTOR ";
 cout << "\n\r 2.- MOSTRAR VECTOR ";
 cout << "\n\r 3.- ORDENAR X BURBUJA";
 cout << "\n\r 4.- ORDENAR X BURBUJA_SENAL";
 cout << "\n\r 5.- ORDENAR X SHAKER_SORT";
 cout << "\n\r 6.- ORDENAR X INSERCION_DIRECTA";
 cout << "\n\r 7.- ORDENAR X INSERCION_BINARIA";
 cout << "\n\r 8.- ORDENAR X SELECCION_DIRECTA";
 cout << "\n\r 9.- ORDENAR X SHELL";
 cout << "\n\r 10.- ORDENAR X QUICKSORT_RECURSIVO";
 cout << "\n\r 11.- ORDENAR X QUICKSORT_ITERATIVO";
 cout << "\n\r 12.- ORDENAR X HEAPSORT";
 cout << "\n\n\n\r Seleccione su opcion ---> ";
 cin >> i;
 }while(i<0 || i>12);
 return(i);

}
void leerVector(int X[Max],int *dimX)
{
 int n,i,val;
 randomize;//randomize es aqui donde si lo pongo como comentario me genera el mismo vector y es mas facil medir el tiempo..
 printf("INGRESE LA DIMENSION DE SU VECTOR A GENERAR: ");
 cin>>n;
 if(n<Max)
 {
 for(i=0;i<n;)
 {
 val=random(TOPE);
 X[i]=val;
 i=i+1;
 }
 *dimX=n;
 printf("\n............Proceso de Lectura de Numeros Aleatorios Completada............\n\n");
 }
 else
 {
 printf("Dimension fuera de Rango...\n\n");
 }
}

void mostrarVector(int X[Max],int dimX)
{
 int i,val;
 if(dimX>0){
 for(i=0;i<dimX;)
 {
 val=X[i];
 printf("%3d ",val);
 i=i+1;
 }
 }
 else{
 printf("Vector vacio ...!\n\n");
 }
}
void ordenarxBurbuja(int X[Max],int dimX)
{
 int i,j,aux;
 long ini,fin;
 int contador=0;
contador++;
 ini = clock();// INICIA EL PROCESO DEL ORDENAMIENTO
 for(int i=0;i<dimX-1;i++){
    contador++;
    contador++;
        for(int j=i+1;j<dimX;j++){
        contador++;
        contador++;
        if(X[i]>X[j]){
            aux=X[j];
            X[j]=X[i];
            X[i]=aux;
            contador+=2;
        }
            contador++;
    }
contador++;
 }
 mostrarVector(X,dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<"Los pasos fueron "<< "para " << dimX << contador;
}

void ordenarxBurbuja_senal(int X [Max],int *dimX)
{
 bool BAND=false;
 int i=0,j,aux, N=*dimX-1;
 int contador=0;
 long ini,fin;
 ini = clock();
 contador++;
 while((i<=N-1)&&(!BAND))
 {
 contador++;
 BAND=true;
 for(j=0;j<=N-1;j++)
 {
     contador++;
     contador++;
 if(X[j]>X[j+1])
 {
 aux=X[j];
 X[j]=X[j+1];
 X[j+1]=aux;
 BAND=false;
 contador+=4;
 }
 contador++;
 }
 i=i+1;
 contador++;
 }
 mostrarVector(X,*dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<"Los pasos a relizar de "<< *dimX << " es "<< contador;
}

void ordenarxShaker_sort(int X[Max],int *dimX)//METODO DE LA SACUDIDA
{
 int i,IZQ=1,aux,N=*dimX-1,k=N,DER=N;
 long ini,fin;
 int contador=0;
 ini = clock();
 contador++;
 while(DER>=IZQ)
 {
contador++;
 for(i=DER;i>=IZQ;i--)
 {
     contador++;
     contador++;
 if(X[i-1]>X[i])
 {
 aux=X[i-1];
 X[i-1]=X[i];
 X[i]=aux;
     contador+=3;
 k=i;
 }
 contador++;
 }
 IZQ=k+1;
     contador++;
 for(i=IZQ;i<=DER;i++)
 {
         contador++;
             contador++;
 if(X[i-1]>X[i])
 {
 aux=X[i-1];
 X[i-1]=X[i];
 X[i]=aux;
     contador+=3;
 k=i;
 }
     contador++;
 }
 DER=k-1;
 contador++;
 }
 mostrarVector(X,*dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

void ordenarxInsercion_directa(int X[Max],int *dimX)
{
 int i,aux,k,N=*dimX-1;
 long ini,fin;
 int contador=0;
 ini = clock();
 contador++;
 for(i=1;i<=N;i++)
 {contador++;
 aux=X[i];
 contador++;
 k=i-1;
 contador++;
 while((k>=0)&&(aux<X[k]))
 {
 X[k+1]=X[k];
 k=k-1;
 contador++;
 contador++;
 }
 X[k+1]=aux;
 contador++;
 }
 mostrarVector(X,*dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

void ordenarxInsercion_binaria(int X[Max],int *dimX)
{
 int i,aux,IZQ,DER,M,j,N=*dimX-1;
 long ini,fin;
 int contador=0;
 ini = clock();
 contador++;
 for(i=1;i<=N;i++)
 {
 contador++;
 aux=X[i];
 contador++;
 IZQ=0;
 DER=i-1;
 contador++;
 while(IZQ<=DER)
 {
     contador++;
 M=(int)((IZQ+DER)/2);
 contador++;
 if(aux<=X[M]){
 DER=M-1;
 contador++;
 }
 else
 {
    contador++;
 IZQ=M+1;
 }
 contador++;
 }
 j=i-1;
 contador++;
 while(j>=IZQ)
 {
 X[j+1]=X[j];
 contador++;
 j=j-1;
 contador++;
 }
 X[IZQ]=aux;
 contador++;
 }
 mostrarVector(X,*dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

//ORDENAMIENTO POR SELECCION
/*ESTE METODO CONSISTE EN ENCONTRAR EL MENOR ELEMENTO DEL ARREGLO
Y UBICARLO AL PRINCIPIO... LUEGO SE BUSCA EL MENOR ELEMENTO DEL RESTO Y SE
UBICA EN SEGUNDO LUGAR. SE REPITE EL PROCESO N-1 VECES*/
void ordenarxSeleccion_directa(int X[Max],int dimX)
{
 int i,MENOR,k,j;
 time_t ini,fin;
 ini = clock();// inicia el calculo del metodo de ordenamiento

 for(i=0;i<dimX;)
 {
 MENOR=X[i];
 k=i;
 for(j=i+1;j<dimX;)
 {
 if(X[j]<MENOR)
 {
 MENOR=X[j];
 k=j;
 }
 j=j+1;
 }
 X[k]=X[i];
 X[i]=MENOR;
 i=i+1;
 }
 mostrarVector(X,dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(double)CLOCKS_PER_SEC);
}

void ordenarxShell(int X[Max],int *dimX)
{
 int i,aux,N=*dimX-1,INT=N+1;
 bool BAND;
 int contador=0;
 long ini,fin;
 ini = clock();
 contador++;
 while(INT>0)
 {
 INT=(int)(INT/2);
 BAND=true;
 contador++;
 while(BAND)
 {
     contador++;
 BAND=false;
 i=0;
 while((i+INT)<=N)
 {contador++;
 if(X[i]>X[i+INT])
 {
 aux=X[i];
 X[i]=X[i+INT];
 X[i+INT]=aux;
 contador+=3;
 BAND=true;
 }
 i=i+1;
 contador++;
 }
 contador++;
 }
 contador++;
 }
 mostrarVector(X,*dimX);
 fin=clock();

 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

void ordenarxQuicksort_recursivo(int X[Max],int *dimX)
{
 int N=*dimX-1;
 long ini,fin;
 int contador=0;
 ini = clock();
 contador++;
 Reduce_recursivo(X,0,N);
 contador++;
 mostrarVector(X,*dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

void Reduce_recursivo(int X[Max],int INI,int FIN)
{
 int IZQ=INI,DER=FIN,POS=INI,aux;
 bool BAND=true;
 int contador=0;
 contador++;
 while(BAND)
 {
 BAND=false;
 contador++;
 while((X[POS]<=X[DER])&&(POS!=DER))
 {
 DER=DER-1;
 contador++;
 }
 contador++;
 if(POS!=DER)
 {
 aux=X[POS];
 X[POS]=X[DER];
 X[DER]=aux;
 POS=DER;
 contador+=4;
 contador++;
 while((X[POS]>=X[IZQ])&&(POS!=IZQ))
 {
 IZQ=IZQ+1;
 contador++;
 }
 contador++;
 if(POS!=IZQ)
 {
 BAND=true;
 aux=X[POS];
 X[POS]=X[IZQ];
 X[IZQ]=aux;
 POS=IZQ;
 contador+=4;
 }
 }
 contador++;
 }
 contador++;
 if((POS-1)>INI)
 {
 Reduce_recursivo(X,INI,POS-1);
 }
 contador++;
 if(FIN>(POS+1))
 {
 Reduce_recursivo(X,POS+1,FIN);
 }
}

void ordenarxQuicksort_iterativo(int X[Max],int *dimX)
{
 int full=0,I,F,POS,N=*dimX-1,P1[Max],P2[Max];
 int contador=0;
 long ini,fin;
 P1[full]=0;//PILA MENOR
 P2[full]=N;//PILA MAYOR
 ini = clock();
 contador++;
 while(full>=0)
 {
 I=P1[full];
 F=P2[full];
 full=full-1;
 contador+=3;
 contador++;
 POS=Reduce_iterativo(X,I,F);
 contador++;
 if(I<(POS-1))
 {
 full=full+1;
 P1[full]=I;
 P2[full]=POS-1;
 contador+=2;
 }
 contador++;
 if(F>(POS+1))
 {
 full=full+1;
 P1[full]=POS+1;
 P2[full]=F;
 contador+=2;
 }
 contador++;
 }
 mostrarVector(X,*dimX);
 fin=clock();

 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
  cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

int Reduce_iterativo(int X[Max],int INI,int FIN)
{
 int IZQ=INI,DER=FIN,aux,POS=INI;
 bool BAND=true;
 int contador=0;
 contador++;
 while(BAND)
 {
     contador++;
 while((X[POS]<=X[DER])&&(POS!=DER))
 {
 DER=DER-1;
 contador++;
 }
 contador++;
 if(POS==DER)
 {
 BAND=false;

 }
 else
 {
 aux=X[POS];
 X[POS]=X[DER];
 X[DER]=aux;
 POS=DER;
 contador+4;
 contador++;
 while((X[POS]>=X[IZQ])&&(POS!=IZQ))
 {
 IZQ=IZQ+1;
 contador++;
 }
 contador++;
 if(POS==IZQ)
 {
 BAND=false;
 }
 else
 {
 aux=X[POS];
 X[POS]=X[IZQ];
 X[IZQ]=aux;
 POS=IZQ;
 contador+4;
 }
 }
 contador++;
 }
 //return(POS);// POS variable es una variable donde se almacena el resultado del algoritmo.
}

void ordenarxHeapsort(int X[Max],int *dimX)//METODO DEL MONTICULO
{//METODO EFICIENTE QUE TRABAJA CON ARBOLES .
 long ini,fin;
 int contador=0;
 ini = clock();
contador++;
 Inserta_monticulo(X,dimX);
 contador++;
 Elimina_monticulo(X,dimX);
 contador++;
 mostrarVector(X,*dimX);
 fin=clock();
 printf("\n\ntiempo en segundos %f s\n\n",(fin-ini)/(float)CLOCKS_PER_SEC);
 cout<<" Para ordenar " << *dimX <<" se necesita " << contador << "pasos";
}

void Inserta_monticulo(int X[Max],int *dimX)
{
 int i,k,aux,N=*dimX-1;
 bool BAND;
 int contador=0;
 contador++;
 for(i=1;i<=N;i++)
 {
contador++;
 k=i;
 BAND=true;
 contador++;
 while((k>0)&&BAND)
 {
 BAND=false;
 contador++;
 if(X[k]>X[(int)(k/2)])
 {
 aux=X[(int)(k/2)];
 X[(int)(k/2)]=X[k];
 X[k]=aux;
 k=(int)(k/2);
 BAND=true;
  contador+=5;
 }
 contador++;
 }
 contador++;
 }
}

void Elimina_monticulo(int X[Max],int *dimX)
{
 int i,aux,IZQ,DER,k,AP,MAYOR,N=*dimX-1;
 bool BOOL;
 int contador=0;
 contador++;
 for(i=N;i>=1;i--)
 {contador++;
 aux=X[i];
 X[i]=X[0];
 IZQ=1;
 DER=2;
 contador+5;
 k=0;
 BOOL=true;
 contador++;
 while((IZQ<i)&&BOOL)
 {
 MAYOR=X[IZQ];
 AP=IZQ;
 contador+=2;
 contador++;
 if((MAYOR<X[DER])&&(DER!=i))
 {
 MAYOR=X[DER];
 AP=DER;
 contador+=2;
 }contador++;
 if(aux<MAYOR)
 {
 X[k]=X[AP];
 k=AP;
 contador+2;
 }
 else
 {
     contador++;
 BOOL=false;
 }
 IZQ=k*2;
 DER=IZQ+1;
 contador++;
 contador+=2;
 }
 X[k]=aux;
 contador++;
 }
}
