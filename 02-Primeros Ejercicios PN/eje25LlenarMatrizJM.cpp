#include <iostream>
int main(){
    //declaro la variable nuemeros que es una matriz de 100 x 100 numeros
    int numeros[100][100],filas,columnas;

    std::cout<<"indique cuantas FILAS tendra la matriz: ";
    std::cin>>filas;
    std::cout<<"indique cuantas COLUMNAS tendra la matriz: ";
    std::cin>>columnas;

    //inicio una secuencia de filas y luego de columnas para PEDIR los datos de cada posicion

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"el valor de la posicion: "<<i+1<<", "<<j+1<<": ";
            std::cin>>numeros[i][j];
        }
        std::cout<<"\n";
    }
    std::cout<<"\n\n";

    // inicio una secuencia de filas y columnas para MOSTRAR los datos de cada posicion

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {   
            std::cout<<numeros[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";

    system ("pause");
    return 0;
}