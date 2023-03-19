#include <iostream>
int main(){
    int numeros[100],n;
    do
    {
        std::cout<<"Ingresa la cantidad de elementos de tu arreglo (mas de 1 y menos de 100)";
        std::cin>>n;
    } while ( (n < 1 ) || (n>100));
    for ( int i = 0 ; i < n ; i++)
    {
        std::cout<<"Ingresa el valor del elemento "<<(i+1)<<" : ";
        std::cin>>numeros[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<(i+1)<<"="<<numeros[i]<<"\n";
    }
    
    system ("pause");
    return 0;
}