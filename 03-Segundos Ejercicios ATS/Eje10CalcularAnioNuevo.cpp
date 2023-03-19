#include <iostream>
#include <conio.h>

using namespace std;

void tomarDias ();

int calc_anios (int, int &, int &, int &);

int calc_fecha ( int, int, int);

int totalDias, anios, meses, dias, aniosx, mesesx, diasx, aniosH, mesesH, diasH;

int main ()
{
 tomarDias ();

 calc_anios (totalDias, anios, meses, dias);

 calc_fecha ( aniosx, mesesx, diasx, aniosH, mesesH, diasH);





}
void tomarDias ()
{
cout<<"ingrese la cantidad de dias Totales: ";
cin>>totalDias;
}

int calc_anios (int, int &, int &, int &)
{
anios = totalDias / 365;
totalDias = totalDias %365;
meses = totalDias /12;
totalDias = totalDias%12;
dias = totalDias / 30;
totalDias = totalDias %30;
dias = totalDias;
}

int calc_fecha ( aniosx, mesesx, diasx, aniosH, mesesH, diasH)
{


}