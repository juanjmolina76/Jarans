#include <iostream>
#include <conio.h>

using namespace std;
//prototipo de funcion

int calcular (int, int &, int &, int &);

int main ()
{
//declaro las variables

    int cantSeg=0,horas=0,min=0,seg=0;

    cout<<"Digite la cantidad de segundos: "<<endl;
    cin>>cantSeg;

    //llamo a la funcion
    calcular (cantSeg, horas,min,seg);
    
    cout<<"El tiempo equivalente a los segundos digitados es: ";
    cout<<"\nHoras: "<<horas;
    cout<<"\nMinutos: "<<min;
    cout<<"\nSegundos: "<<seg;

    getch ();
    return 0;

}
//defino la funcion

int calcular (int cantSeg, int & horas, int & min, int & seg)
{
    horas = cantSeg / 3600;
    cantSeg = cantSeg % 3600;
    // cantSeg % = 3600;
    min = cantSeg / 60;
    cantSeg = cantSeg % 60;
    seg = cantSeg;
 }