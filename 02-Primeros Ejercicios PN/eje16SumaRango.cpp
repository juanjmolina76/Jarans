/*
Programa que pida numeo enteros y los vaya sumando.
Si el numero introducido esta dentro de 100 y 200 o es 0, cerrar el programa */

#include <iostream>
main (){
    int numero,suma=0;
    do
    {
        std::cout<<"Ingresa un numero entero (el rango de 100 a 200 o 0 cierra el programa)";
        std::cin>>numero;
        suma=suma+numero;
        std::cout<<"\nla suma es: "<<suma<<"\n";
    } while ( ((numero<100) || (numero>200) ) && (numero!=0) );
    system ("pause");
    return 0;
}