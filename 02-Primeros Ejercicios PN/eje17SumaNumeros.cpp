/*
Programa que pida un numero entero n.
Validadr que el nuemro n sea mayor a 1.
El programa hara un ciclo que sume los numeros 1+2+3 hasta n.
*/



#include <iostream>
main (){
    int numero,suma=0;
    do
    {
        std::cout<<"Ingresa un nuemro mayor a 1: ";
        std::cin>>numero;

    } while (numero<=1);
    
    for (int i = 1; i <= numero; i++)
    {
        suma=suma+i;
        std::cout<<i<<"+";
    }
    
    std::cout<<"\n"<<"\naqui esta tu suma: "<<suma<<"\n"<<"\n";
    system ("pause");
    return 0;

}