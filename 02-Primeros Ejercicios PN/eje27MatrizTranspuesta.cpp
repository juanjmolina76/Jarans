/*
Delarar la matrizA y la matrizB de 3x3.
Pedir al humano que ingrese los datos de la matrizA.
Llenar la matrizB con los datos transpuestos de la matrizA
Imprimir la matrizA y matrizB.
*/




#include <iostream>
int main(){

    int matrizA[3][3],matrizB[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<"ingresa los datos de la matriz en la posicion ["<<i+1<<"]["<<j+1<<"]";
            std::cin>>matrizA[i][j];
        }
        
    }
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j]=matrizA[j][i];
            //asi se transponen los datos de la matriz A en la B
        }
        
    } 
    std::cout<<"\nMatriz A\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizA[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\nMatriz B\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizB[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    system ("pause");
    return 0;
}