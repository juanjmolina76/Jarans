
#include<iostream>
#include<iomanip>
#include<ctime>//para los numeros aleatorios
#include<cstdlib>//para los numeros aleatorios
#include<conio.h>
#define N 50
using namespace std;


void datos_fil_col(int &fil, int &col);


int main(){

    int fil,col;
    int matriz[N][N];

    datos_fil_col(fil,col);

    cout<<"Filas ingresadas: "<<fil<<" Columnas ingresadas: "<<col<<endl;

    getch();
    return 0;
}

void datos_fil_col(int &fil, int &col){ 
//Quitale el & aqui y al prototipo de funciony vas a ver que no te va a poner 
//lo que ingresaste te va a poner la posicion de memoria donde esta la variable fil y col.
//Para validar que no tome numeros negativos y no mayores a 50
//de como puse el define N 50 ahi si quieres le puedes poner mas alto el define 
    do{
        cout<<"Filas: ";
        cin>>fil;
        if(fil<=0 || fil>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }while(fil<=0 || fil>N);
    
    do{
        cout<<"Columnas: ";
        cin>>col;
        if(col<=0 || col>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }while(col<=0 || col>N);
}