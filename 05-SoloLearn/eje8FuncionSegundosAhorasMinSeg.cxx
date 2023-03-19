#include <iostream>
#include <conio.h>

using namespace std;
//declaro funciones
void ingDatos ();
int  calcTiempo (int ,int&, int &, int &, int &);

//declaro variables globales
int cantSeg, dias,horas, m,seg;

int main()
{   
ingDatos ();
calcTiempo(cantSeg,dias,horas,m,seg);    
 
    cout<<"los tiempos son los siguientes: ";
    cout<<"\nDias: "<<dias;
    cout<< "\nHoras: "<<horas;
    cout<<"\nMinutos: "<<m;
    cout<<"\nSegundos: "<<seg;    
}
//declaro la funcion de ingresar los datos
void ingDatos ()
{
cout<<"digite la cantidad de segundos totales: ";
cin>>cantSeg;
}
//declaro la funcion de calcular el tiempo
int calcTiempo (int  cantSeg,int& dias, int & horas, int & m, int & seg)
{
    dias =cantSeg/86400;
    cantSeg =cantSeg%86400;
    horas= cantSeg /3600;
    cantSeg = cantSeg % 3600;
    m = cantSeg / 60;
    cantSeg = cantSeg %60;
    seg = cantSeg;
   
}

