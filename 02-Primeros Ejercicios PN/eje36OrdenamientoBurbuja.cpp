
/*
Pedir que ingrese 5 numeros.
Ordenar los numeros.
Mostrar los numeros en forma ascendente.
Mostrar los numeros en forma descendente.

Si ingreso: 1,2,3,5,4 ;
Sin burbuja mejorado = 20 ciclos
*/
#include <iostream>
int main(){
    int numeros[5],aux,ciclos=0;
    std::cout<<"Ingrese 5 numeros en el orden que quieras. ";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingresa el numero"<<i+1<<" : ";
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numeros[j]>numeros[j+1]){
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
            ciclos++; 
        }     
    }
    std::cout<<"aqui estan tus numeros (ordenados en forma ascendente) en "<<ciclos<<"ciclos:"<<"\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"aqui estan tus numeros (ordenados en forma descendente) en "<<ciclos<<"ciclos:"<<"\n";
    for (int i = 4; i >=0; i--)
    {
        std::cout<<numeros[i]<<"\n";
        }
    system ("pause");
    return 0;
}