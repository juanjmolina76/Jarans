#include <iostream>

int main(){
    int n1,n2;
    std::cout<<"Escribe dos numeros: \n";
    std::cout<<"Numero 1:";std::cin>>n1;
    std::cout<<"Numero 2:";std::cin>>n2;
    if(n1==n2){
        std::cout<<"los dos numeros son iguales\n";
    }
    else if(n1>n2){
        std::cout<<"El numero 1 es mayor\n";
        }
    else{
        std::cout<<"El numero 2 es mayor\n";
    }
    system("pause");
    return 0;
} 