#include <iostream>

int main(){
    char letra;
    regresar:
    std::cout<<"Por favor ingresa una letra vocal:";
    std::cin>>letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout<<"Bien logrado, presionaste una vocal\n";
        break;
    default:
        std::cout<<"No pusiste una vocal\n";
        goto regresar;
        break;
    }

    system("pause");
    return 0;
}