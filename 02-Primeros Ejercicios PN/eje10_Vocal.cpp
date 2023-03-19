#include <iostream>

int main(){
    char vocal;
    comienzo:
    std::cout<<"Ingresa una vocal minuscula:\n";
    std::cin>>vocal;
    
    switch (vocal)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    std::cout<<"Bien hecho, pusiste una vocal\n";
    break;
    
    default:
    std::cout<<"no pusiste una vocal minuscula\n";
    goto comienzo;
    break;
    }
    system ("pause");
    return 0;
}