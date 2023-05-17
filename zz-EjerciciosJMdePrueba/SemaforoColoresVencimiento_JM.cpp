#include <iostream>

int main (){
    char letra;
    regreso:
    do
    {
        std::cout<<"Presiona la letra a: ";
        std::cin>>letra;
        system ("color 2A");
    }while (letra=='a');
    std::cout<<"estupido, te dije que presiones la letra a\n";
    system ("color C0");
    goto regreso;
    system ("pause");
    return 0;
}