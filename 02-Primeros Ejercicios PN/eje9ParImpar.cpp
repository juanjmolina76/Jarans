#include <iostream>
int main(){

    int numero;
    std::cout<<"Por favor ingresa un numero entero: ";
    std::cin>>numero;
    if(numero%2==0){
        std::cout<<"Tu numero es par\n";
    }
    else{
        std::cout<<"Tu numero es impar\n";
    }
    system ("pause");
    return 0;
}