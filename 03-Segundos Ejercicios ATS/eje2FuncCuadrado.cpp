/*Escribir una funcion nombrado funpot() que eleve un numero entero 
que se le transmita a una potednica en nuemero entero positivo y despliegue el resultado.
EL nuemor entero positevo debera ser el segundo valor transmitido a la funcion.
*/
#include <iostream>
#include <conio.h>

using namespace std;
/* Prototipos de funcion*/
void pedirDatos();
void funPot (int x, int y);
//Declaro variables globales
int numero,exponente;

int main()
{
pedirDatos ();
funPot ( numero, exponente);

getch ();
return 0;
}
//Defino la funcion pedirDatos
void pedirDatos()
{
cout<<"Digite un numero: ";
cin>>numero;
cout<<"Digite el exponente: ";
cin>>exponente;
}
//Defino la funcion funPot
void funPot ( int x, int y )
{
    long resultado=1;

    for (int i = 1 ; i <= y ; i++)
    {
        resultado = resultado * x;
            }
    cout<<"El resultado es: "<<resultado<<endl;
}
