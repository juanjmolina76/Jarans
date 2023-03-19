#include <iostream>
/*Esta es la funcion principal
Podemos ingresar numeros 
Y se va a mostrar
*/
int main(){
    int numero;
    std::cout<<"Humano!! ingrese un numero entero: ";
    std::cin>>numero;
    std::cout<<"\n";
    std::cout<<"Humano este es el numero que ingresaste: ";
    std::cout<<numero;
    std::cout<<"\n";
    //std::cin.get();
    system("pause");
    return 0;
}