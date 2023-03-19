/*Realice una Funcion que tome como parametro un Vector 
de numeros enteros  y devuelva la suma de sus elementos*/


#include <iostream>
#include <conio.h>
using namespace std;
//Prototipos de Funcion
void pedirDatos ();
int calcularSuma (int vec[], int);
//Variables Globales e inicializo la variable suma para que no de error
int vec[100],tam;

int main()
{
pedirDatos ();
cout<<"La suma de los elementos del Vector es: "<<calcularSuma(vec,tam)<<"\n";
getch ();
return 0;
}

//Defino la primer FUNCION
void pedirDatos ()
{
    cout<<"Digite la cantidad de elementos del Vector: ";
    cin>>tam;
    for (int i = 0 ; i < tam ; i++)
    {
    cout<<i+1<<".Digite un numero: ";
    cin>>vec[i];
    }
}

//Defino la segunda FUNCION
int calcularSuma (int vec[], int tam)
{
    int suma=0;
    for (int i = 0 ; i < tam ; i ++)
    {
    suma = suma + vec[i];
    }
    return suma;
}