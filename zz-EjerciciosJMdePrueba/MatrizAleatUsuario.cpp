/*Una matriz de filas y columnas ingresadas por el usuario, 
validando que no acepte menor o igual a cero 
y que no pase de 20.
La lleno con nros aleatorios del 1 al 50 para que no estes
llenando la matriz a cada rato.
Haces una funcion para llenarla y en otra funcion haces
la suma de los numeros pares e impares, el promedio de los pares
e impares y los mostras.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 20

using namespace std;


void LlenarMatriz (int fil,col);


int main()
{
int num,ma[N][N],fil,col;
srand(time(NULL));
num=rand()%51;
LlenarMatriz (int fil,int col)


}

void LlenarMatriz (int fil,int col)
int c;
{
do
{
cout<<"Filas: ";
cin>>fil;
if (fil<=0 || fil>N)
{
    cout<<"Error!!!.\n";
    getch();
}
}while (fil<=0 || fil>N);

do 
{
    cout<<"Columnas: ";
    cin>>col;
    if (col<=0 || fil>N)
    {
        cout<<"Error!!!.\n";
        getch();
    }
}while (fil<=0 || fil>N);


for (c=1 ; c <= 50; c ++)
{
    fil = 1 + rand()%(51 - 1);
}
            
}