/*
Programa que pida al usuario que digite un numero entre 1y 10 y que valide que este dentro
de el rango de 1 y 10.
Mostrar los multiplos de ese numero del 1 al 10
*/

#include <iostream>
int main (){
    int numero;
    do{
        std::cout<<"Digita un numero entre 1 y 10: ";
        std::cin>>numero;
        if(numero<1 || numero>10){
            std::cout<<"Estupido, te dije que digites un numero entre 1 y 10";
        }
    }while(numero<1 || numero>10);
    std::cout<<"\n"<<"\n";
    for (int i = 1; i <= 10; i++)
    {
       std::cout<<i<<" x "<<numero<<"="<<i*numero<<"\n";"\n";
    }
    system("pause");
    return 0;
}