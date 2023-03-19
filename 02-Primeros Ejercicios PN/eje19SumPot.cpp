/*cuadrado=pow(i,2); 
        pero EN LA LIBRERIA MATH.H pow no es compatible con la
        variable int de nros ENTEROS, hay que usar nros FLOTANTES*/
#include <iostream>
#include <math.h>
int main(){
    float potencia,n,suma=0;
    do
    {
        std::cout<<"Ingresa un numero mayor a 1: ";
        std::cin>>n;  
    } while (n<1);
    for (int i = 1; i <= n; i++)
    {
        potencia=pow(2,i);
        suma+=potencia;
        std::cout<<"2^"<<i<<"+";    
    }
    std::cout<<"\n"<<"Esta es la sumatoria: "<<suma<<"\n";
    system("pause");
    return 0;
}