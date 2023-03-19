#include <iostream>

int main (){
    char letra;
    regreso:
    do
    {
        std::cout<<"Presiona la letra a: ";
        std::cin>>letra;
    }while (letra=='a');
    std::cout<<"estupido, te dije que presiones la letra a\n";
    goto regreso;
    system ("pause");
    return 0;
}