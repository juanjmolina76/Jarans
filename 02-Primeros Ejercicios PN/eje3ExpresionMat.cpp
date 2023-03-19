#include <iostream>

int main(){
    float a,b,res;
    std::cout<<"Por favor ingresa lo siguiente:\n";
    std::cout<<"valor a:"; std::cin>>a;
    std::cout<<"valor b:"; std::cin>>b;
    //exp,raiz,*,/,+/- o bien le pongo parentesis para asegurarme el orden del calculo
    res=(a/b)+1;
    std::cout.precision(3);
    //1.83333
    std::cout<<"\nAqui esta el resultado:"; std::cout<<res<<"\n";
    system("pause");
    return 0;
}