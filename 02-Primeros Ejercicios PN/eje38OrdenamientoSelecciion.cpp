#include <iostream>
int main(){
    int numeros[5],min,aux;
    std::cout<<"Ingresa cinco numeros enteros: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i+1<<" ";
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        min=i;
        for (int j = i+1; j < 5; j++)
        {
            if (numeros[min]>numeros[j])
            {
                min=j;
            } 
        }
        aux=numeros[i];
        numeros[i]=numeros[min];
        numeros[min]=aux;
    }
    std::cout<<"Estos son los numeros ordenados de forma ascendente: "<<"\n";
    for (int i = 0 ; i < 5 ; i++ ){
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"Estos son los numeros ordenados de forma descendente: "<<"\n";
    for (int i = 4; i >= 0; i--){
    std::cout<<numeros[i]<<"\n";
    }
    system ("pause");
    return 0;

}