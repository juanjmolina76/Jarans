#include <iostream>
int main(){
    int edad;
    comienzo:
    std::cout<<"Escribe la edad del candidato al puesto:\n";
    std::cin>>edad;
    if(edad>=18 && edad<=40){
        std::cout<<"Es APTO para trabajar en la empresa\n";}
    else{
       std::cout<<"NO sos apto para nuestra empresa\n";
    }   
    goto comienzo; 
    system ("pause");
    return 0;
}