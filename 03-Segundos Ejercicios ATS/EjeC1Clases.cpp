#include <iostream>
//#include <stdlib.h>
#include <string>

using namespace std;


class Rectangulo
{
private://ATRIBUTOS
    float largo,ancho;
public://METODOS
    Rectangulo(float,float);//CONSTRUCTOR inicializador
    void perimetro();
    void area();
};
//Constructor nos sirve para pasar las variables de los metodos
// e inicializar atributos
Rectangulo::Rectangulo(float _largo, float _ancho)
{
    largo = _largo;
    ancho = _ancho;
}
//METODOS
void Rectangulo::perimetro()
{
    float _perimetro = (2 * largo) + (2 * ancho);
    cout<<"El perimetro es : "<<_perimetro<<"\n";
}
void Rectangulo::area()
{
   float _area = largo * ancho;
    cout<<"El area es : "<<_area<<"\n";
}

int main()
{
//CREO UN OBJETO
Rectangulo r1(100,20);
r1.area();

Rectangulo r2(5,5);
r2.perimetro();
r2.area();
//~Rectangulo::
Rectangulo r3(25,10);
r3.area();

    system ("pause");
    return 0;
    
}