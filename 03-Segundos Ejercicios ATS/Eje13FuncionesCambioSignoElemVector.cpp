#include <iostream>
#include <conio.h>

using namespace std;

void tomarDatos ();
void cambiarSigno (int vec [], int);
void mostrarDatos (int vec [], int);

int vec[100], tam;

int main ()
{
    tomarDatos();
    cambiarSigno(vec,tam);
    mostrarDatos(vec,tam);

getch ();
return 0;
}


void tomarDatos ()
{
    cout<<"Indique la cantidad de elementos del Vector: ";
    cin>>tam;
    for (int i = 0 ; i < tam ; i++ )
    {
        cout<<i+1<<".Elemento: ";
        cin>>vec[i];
    }
}

void cambiarSigno (int vec[], int tam)
{
    for (int i = 0 ; i < tam ; i++)
    {
        vec [i] = vec [i] * -1 ;  
    }
}

void mostrarDatos (int vec[], int tam)
{
cout<<"Los elementos del vector cambiado el signo son: "<<"\n";
    for (int i = 0 ; i < tam ; i++)
    {
    cout<<vec[i]<<" ";
    
    }
}