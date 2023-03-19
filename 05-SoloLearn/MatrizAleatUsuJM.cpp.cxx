/*
una matriz de filas y columnas ingresadas por el usuario, 
validando que no acepte menor o igual a cero y que no pase de 20.   
la llenas con numeros aleatorios del 1 al 50 para que no estes llenando la matriz a cada rato.  
Haces una funcion para llenarla matriz, una funcion para mostrarla 
y en otra funcion haces la suma de los numeros pares e impares, 
el promedio de los pares e impares y los muestras
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
# define N 20

using namespace std;

void DefineTamaMatr (int &f,int &c);
void LlenarMatriz (int ma[N][N],int fil,int col);
void MostrarMatriz (int ma[][N],int fil,int col);

int main ()
{
    int num, ma[N][N];
    int fil,col;  
    srand(time(NULL));
    num=rand()%21;

    DefineTamaMatr (fil,col);
    LlenarMatriz (ma,fil,col);
    MostrarMatriz (ma,fil,col);

    cout<<"Filas ingresadas: "<<fil<<" Columnas ingresadas: "<<col<<endl;
    
    getch();
    return 0;          
}

  void DefineTamaMatr (int &f,int &c)
{
  do
  {
        cout<<"Filas: ";
        cin>>f;
        if(f<=0 || f>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }
    while(f<=0 || f>N); 
    do
    {
        cout<<"Columnas: ";
        cin>>c;
        if(c<=0 || c>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }
    while(c<=0 || c>N);
    
 }  
   void LlenarMatriz (int ma [][N],int fil,int col)
 { 
  for (int i=0; i<fil;i++)
    {
        for (int j=0;j<col;j++)
        {
          ma[i][j] = 1 + rand() % (21 - 1);
        }
    }   
  }
void MostrarMatriz (int ma[][N],int fil,int col)
{
for (int i=0; i<fil;i++)
    {
        for (int j=0;j<col;j++)
        {
          cout<<setw(4)<<ma[i][j];
        }
        cout<<"\n";
    }

}
