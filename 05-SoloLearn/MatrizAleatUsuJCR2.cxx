#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
using namespace std;


void DefineTamaMatr (int &f,int &c);
void LlenarMatriz (int ma[N][N],int fil,int col);
void mostra_matriz(int ma[][N], int fil, int col);


int main (){

    int num, ma[N][N];
    int fil,col;  
    srand(time(NULL));
    num=rand()%21;

    DefineTamaMatr (fil,col);
    cout<<"Filas ingresadas: "<<fil<<" Columnas ingresadas: "<<col<<endl;
    LlenarMatriz (ma,fil,col);
    cout<<"\nMatriz llena.\n";
    mostra_matriz(ma,fil,col);

    
    getch();
    return 0;          
}

void mostra_matriz(int ma[][N], int fil, int col){

    for(int i=0; i<fil; i++){
        for (int j=0; j<col; j++){
            cout<<setw(4)<<ma[i][j];
       }
       cout<<endl;
    }
}

void DefineTamaMatr(int &f,int &c){
  
    do{
        cout<<"Filas: ";
        cin>>f;
        if(f<=0 || f>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }while(f<=0 || f>N); 
    
    do{
        cout<<"Columnas: ";
        cin>>c;
        if(c<=0 || c>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }while(c<=0 || c>N);
}  

void LlenarMatriz (int ma[][N],int fil,int col){ 
  
  
    for(int i=0; i<fil; i++){
        for (int j=0; j<col; j++){
            ma[i][j] = 1 + rand() % (21 - 1);
       }
    }

}