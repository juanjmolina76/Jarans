/*Una matriz es simetrica si es una matriz cuadrada, la cual tiene la caracteristica de ser igual a su 
traspuesta.*/


#include <iostream>

using namespace std;

int main(){

    int fila,columna,verificador=0;

    // Pidiendo datos al usuario la cantidad de filas y columnas
  

    cout<<"Ingresa la Cantidad de Fila\nAqui: "; cin>>fila;
    cout<<"Ingresa la Cantidad de Columna\nAqui: "; cin>>columna;

    // Validando Datos que el Usuario Ingresa

    while(fila!=columna){
        cout<<"\nTienes que Ingresar una Matriz Simetrica.";
        cout<<"\nEjm: 3 x 3";
        cout<<"\n\n";
        cout<<"Fila: " ; cin>>fila;
        cout<<"Columna: " ; cin>>columna;
    }

    // Declarando Variables

    int matriz[fila][columna],matriz2[fila][columna];

    // Ingresando Valores de la Matriz 1

    

    cout<<"\n";

    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna; j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":"; cin>>matriz[i][j];
        }
    }

    //Ingresando Valores de la Matriz 2

    cout<<"\n";

    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna; j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":"; cin>>matriz2[i][j];
        }
    }

    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna; j++){
            if(matriz[i][j]==matriz2[i][j]){
                verificador=1;
            }else
            {
                verificador=0;
            }
            
                break;

        }
    }

    cout<<"\n";

    if(verificador==1){
        cout<<"\nLA MATRIZ ES SIMETRICA.";
    }else if(verificador==0){
        cout<<"\nLA MATRIZ NO ES SIMETRICA.";
    }

    cout<<"\n";
    system("pause");
}
