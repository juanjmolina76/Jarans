
/*
Pedir que ingese el tamaño de la matrizA y la matrizB.
Pedir que ingrese los datos de la matrizA y la matrizB.
Comprobar si la matrizA es simetrica con la matrizB.
Mostrar si las matrices son simetricas o no*/
#include <iostream>
int main(){
    int filMatrizA,colMatrizA,filMatrizB,colMatrizB;
    retornar:
    std::cout<<"Ingresa las medidas de la matrizA: ";
    std::cin>>filMatrizA>>colMatrizA;
    std::cout<<"Ingresa las medidas de la matrizB: ";
    std::cin>>filMatrizB>>colMatrizB;
    if (filMatrizA==colMatrizA && filMatrizB==colMatrizB && filMatrizA==filMatrizB)
    {
       int matrizA[filMatrizA][colMatrizB],matrizB[filMatrizB][colMatrizB];
       rellenarDenuevoMatriz:/*vuelvo aca y no arriba porqu no puedo declararlas variables
       dos veces en el ciclo*/
       for (int i = 0; i < filMatrizA; i++)
       {
            for (int j = 0; j < colMatrizA; j++)
            {
                std::cout<<"Ingresa los datos de la matriz A en la posicion["<<i+1<<"]["<<j+1<<"]: ";
                std::cin>>matrizA[i][j];
        }
        
       }
         for (int i = 0; i < filMatrizB; i++)
       {
             for (int j = 0; j < colMatrizB; j++)
            {
                std::cout<<"Ingresa los datos de la matriz B en la posicion["<<i+1<<"]["<<j+1<<"]: ";
                std::cin>>matrizB[i][j];
        }
       }
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                if(matrizA[i][j]!=matrizB[j][i]) {
                std::cout<<"Tu matriz A y B NO son SIMETRICAS, intenta de nuevo\n";
                goto rellenarDenuevoMatriz;
                }
            }   
        }
    } 
        else{
        std::cout<<"Tu matriz A y B NO son CUADRADAS, intenta de nuevo\n";
        goto retornar;
    }


    std::cout<<"Felicidades, bien jugado!!!";
    system ("pause");
    return 0;
}