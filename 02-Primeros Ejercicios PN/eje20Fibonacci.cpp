/*
Programa que ida un numero entero n.
Validar que el numero n sea mayor a 1.
Bucle que genere una seria fibonacci de 1 hasta n.

1 1 2 3 5 8 13 21 34 55...n
*/
#include <iostream>

int main (){
    int n,x=0,y=1,z=0;
    do
    {
        std::cout<<"Ingresa un numero mayor a 1";
        std::cin>>n;
    } while (n<1);
    std::cout<<"1 "<<"\n";
    for ( int i = 1; i < n; i++)
    {
        z=x+y;
        std::cout<<z<<"\n";
        x=y;
        y=z;
        
    }
    std::cout<<"\n";
    system ("pause");
    return 0;
}
