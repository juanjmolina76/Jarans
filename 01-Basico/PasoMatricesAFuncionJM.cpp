#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//Prototipo de la funcion

void ganadores(string clientes[],int, int, int);

int main()
{
    int suerAcum;
    string clientes[] = {"Alicia","Roberto","Braian","Ema","Ana","Bauti","Cintia","Daniel","Ricardo","Samuel","Nicol","Maria","Pablo"};

    int n;
    cin >> n;
    suerAcum = n;
//LLamo a la funcion

    ganadores(clientes, 13,n, suerAcum);
    getch ();
    return 0;
}
//Defino a la funcion

void ganadores(string clientes[],int size, int suerte, int suerAcum)
{
suerte--;
for (int i =0; i < size ; i++)
{
    if (suerte > (size -1 ))
    {
        break;
    }
    cout<<clientes[suerte]<<endl;
    suerte = suerte + suerAcum;
}
}