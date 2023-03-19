/*Elevar al cuadrado todos los elemoentos de la matriz que llena el usuario */

#include <iostream>
#include <conio.h>
using namespace std;
/*Declaro las funciones*/
void CalcularCuadrado (int matriz [][100],int,int);
void MostrarMatrizElevada (int matriz [][100],int,int);

int main()
/*Pido que el usuario ingrese la cantidad de filas y columnas de la matriz */
{
    int matriz [100][100], filas, columnas;
    cout<<"Ingrese cuantas filas tendra la matriz: ";
    cin>>filas;
    cout<<"Ingrese cuantas columnas tendra la matriz: ";
    cin>>columnas;
/*Pido que el usuario llene la matriz*/
    for (int i=0; i < filas; i ++)
    {
        for (int j=0; j < columnas ; j++)
        {
        cout<<"ingrese la posicion "<<i+1<<","<<j+1<<":";
        cin>>matriz [i][j];
        }
    }
    cout<<"\n\n";
/*Muestro la matriz recien ingresada por el usuario*/
    for (int i=0; i < filas; i ++)
    {
        for (int j=0; j < columnas ; j++)
        {
        cout<<matriz[i][j]<<" ";
        }
    cout<<"\n";
    }
    cout<<"\n";
/*Llamo a las funciones en orden*/
void CalcularCuadrado (matriz,filas,columnas);
void MostrarMatrizElevada (matriz,filas,columnas);

getch ();
return 0;

}
/*Defino las funciones*/
void CalcularCuadrado (int matriz [&filas][&columnas], int filas, int columnas)
{
  for (int i=0; i < filas; i ++)
    {
        for (int j=0; j < columnas ; j++)
        {       
        matriz [i][j] = matriz [i][j] * matriz [i][j];
        }
    }  
}

void MostrarMatrizElevada ( int matriz [&filas][&columnas], int filas, int columnas)
{
    for (int i=0; i < filas; i ++)
    {
        for (int j=0; j < columnas ; j++)
        {   
        cout<<matriz [i][j]<<"_";
        }
        cout<<"\n";
    }
}