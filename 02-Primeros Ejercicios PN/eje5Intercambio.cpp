#include <iostream>

int main(){
    int a,b,aux;
    std::cout<<"Te voy a pedir que escribas lo que te voy a ir pidiendo:\n";
    std::cout<<"Valor de a:\n";std::cin>>a;//10
    std::cout<<"Valor de b:\n";std::cin>>b;//5
    aux=a;//aux=10
    a=b;//5
    b=aux;//10
    std::cout<<"\nEstos son los valores intercambiados:\n";
    std::cout<<"Valor de a:\n"<<a<<"\n";
    std::cout<<"Valor de b:\n"<<b<<"\n";

    
 
    system("pause");
    return 0;
}