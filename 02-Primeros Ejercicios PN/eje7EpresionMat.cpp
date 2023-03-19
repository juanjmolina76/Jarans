#include <iostream>
#include <math.h>

int main(){
    float x,y,res;
    std::cout<<"Digita lo que te pido:\n";
    std::cout<<"Valor de x: ";std::cin>>x;
    std::cout<<"Valor de Y: ";std::cin>>y;
    res=(sqrt(x)) / (pow(y,2)-1);
    std::cout<<"Aqui esta tu resultado:\n"<<res<<"\n";

    system("pause");
    return 0;
}