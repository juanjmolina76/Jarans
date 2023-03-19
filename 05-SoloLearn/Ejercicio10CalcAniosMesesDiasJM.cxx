#include <iostream>
#include <conio.h>
using namespace std;

//declaro la funcion
int Calc_anio (int , int & , int & , int & dia);

int main ()
    {
    int TotalDias, anio,mes,dia;

    cout<<"Digite la cantidad total de Dias: ";
    cin>>TotalDias;

    //llamo a la funcion
    Calc_anio (TotalDias,  anio,  mes,  dia);
    cout<<"La fecha actual es: "<<dia+1<<" / "<<mes+1<<" / "<<anio+2000;
    cout<<"\n";

    getch ();
    return 0;
    }

//Defino la funcion
int Calc_anio (int TotalDias, int & anio, int & mes, int & dia)
    {
    anio = TotalDias / 365;
    TotalDias = TotalDias %365;
    mes = TotalDias / 30;
    TotalDias = TotalDias %30;
    dia = TotalDias;
    }
