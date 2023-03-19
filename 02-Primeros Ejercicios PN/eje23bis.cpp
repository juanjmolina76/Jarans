#include <iostream>
#include <vector>
using namespace std;

int numeros;
int columna;
int main (){
    vector<vector<int>>numeros {{1,2,3,4,5},{6,7,8,9,10}};

    for (int fila = 0; fila < numeros.size(); fila++)
    {
        for (columna = 0; columna < numeros[fila].size();columna++ ){
            std::cout<<numeros[fila][columna]<<" ";
        }
        
        std::cout<<"\n";
    }
    std::cout<<numeros.size()<<"\n";
    system ("pause");
    return 0;
}