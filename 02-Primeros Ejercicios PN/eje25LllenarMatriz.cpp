#include <iostream>
main(){
    int matriz[100][100],filas,columnas;
    std::cout<<"Por favor ingresa cuantas filas tendra  tu matriz: ";
    std::cin>>filas;
    std::cout<<"Por favor ingresa cuantas columnas tendra  tu matriz: ";
    std::cin>>columnas;
    //comienza el ciclo anidado
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"Ingresa la posicion "<<i+1<<","<<j+1<<" : ";
            std::cin>>matriz[i][j];
        }
        //desde aqui se muestra la matriz
    }
    std::cout<<"\n\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<"\n";
    }
     std::cout<<"\n\n";  

    system ("pause");
    return 0;
}