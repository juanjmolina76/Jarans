#include <iostream>
#include <conio.h>

using namespace std;

//declaro las funciones
void ingDatos ();
void cuadrado (int x, int y);

int numero,exponente;
int resultado;
int main()
{
    ingDatos();
    cuadrado (numero,exponente);
    
 
    getch();
    return 0;
          
}

void ingDatos (){


std::cout<<"digite un numero: "<<"\n";
std::cin>>numero;
std::cout<<"\ndigite el exponente: ";
std::cin>>exponente;


}

void cuadrado (int x, int y){
//al ser void no retorna nada..x eso imprimo desde aca el resultado.
int ini;
ini= x * x;
for (int i = 0; i <y ; i++)
{
  
  resultado= resultado * x;
}

std::cout<<"el nro "<<numero<<" elevado a la potencia "<<y<<" es: "<<resultado;


}