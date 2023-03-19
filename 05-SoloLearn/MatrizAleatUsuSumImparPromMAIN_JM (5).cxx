/*
una matriz de filas y columnas ingresadas por el usuario, 
validando que no acepte menor o igual a cero y que no pase de 20.   
la llenas con numeros aleatorios del 1 al 50 para que no estes llenando la matriz a cada rato.  
Haces una funcion para llenarla matriz, una funcion para mostrarla 
y en otra funcion haces la suma de los numeros pares e impares, 
el promedio de los pares e impares y los muestras
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
# define N 20

using namespace std;

void DefineTamaMatr (int &f,int &c);
void LlenarMatriz (int ma[N][N],int fil,int col);
void MostrarMatriz (int ma[][N],int fil,int col);
void SumParImparMatriz (int ma [][N],int fil, int col, int &contP,int &contI,int &sumaPar,int &sumaImpar);

void BuscarMayorMenor (int ma [][N],int fil, int col, int &mayor , int &menor);

void  MayorMenorDeFila ( int ma [][N], int fil, int col, int &may, int &men, int &i, int &j);
void PrintAnillo (int ma[][N],int fil, int col,int &NumAnillo);

void ImpAnillo (int ma[][N],int fil, int col, int &NumAnillo);

int main ()
{
    int num, ma[N][N]; 
    int fil,col,contP=0,contI=0,sumaPar=0,sumaImpar=0, mayor=0,menor=1, may,men, NumAnillo=0;
/*; int i,j;
    
  int *mayy, *menn;*/
    srand(time(NULL));
    num=rand()%21;

    DefineTamaMatr (fil,col);
    LlenarMatriz (ma,fil,col); 
    MostrarMatriz (ma,fil,col);
    SumParImparMatriz (ma,fil,col,contP,contI,sumaPar,sumaImpar);
    BuscarMayorMenor (ma,fil,col,mayor,menor);
    
    cout<<endl;
    cout<<"Filas ingresadas: "<<fil<<" Columnas ingresadas: "<<col<<endl;

    cout<<"la cantidad de pares es :"<<contP<<endl;
    cout<<"el promedio de los pares es :"<<sumaPar / contP<<endl;
    cout<<"la suma de los pares es: "<<sumaPar<<endl;
    cout<<"la suma de los impares es: "<<sumaImpar<<endl;
    cout<<"el promedio de los impares es :"<<sumaImpar / contI<<endl;
    cout<<"la cantidad de impares es :"<<contI<<endl;



cout<<"el mayor es: "<<mayor<<endl;
cout<<"el menor es: "<<menor<<endl;


 
 
/*MayorMenorDeFila (ma, fil, col, may, men, i, j);
   mayy = &may;
   menn = &men;
   //cout<<"la > de la fila es: "<<
    
    cout<<"El May y Men son: "<<*mayy<<" "<<*menn<<endl;
//MayorMenorDeFila (ma, fil, col, may, men, i, j);
*/






 /*   for (int i=0; i< fil ; i++)

        {
            may=ma[i][0];
            men=ma[i][0];  
        for (int j=0; j<col ; j++)
        {
        if (ma[i][j] > may)
                {
                may= ma [i][j];
                 }
            if (ma [i][j] < men)
                {
                men = ma[i][j];       
                }     
        }
            cout<<"MAY es: "<<may<<endl;
            cout<<"MEN es: "<<men<<endl;
        }
        */
    cout<<"indique el nro de anillo a imprimir :";
cin>>NumAnillo;

// PrintAnillo (ma, fil, col, NumAnillo);
 ImpAnillo (ma ,fil, col, NumAnillo);

    getch();
    return 0;          
}


  void DefineTamaMatr (int &f,int &c)
{
  do
  {
        cout<<"Filas: ";
        cin>>f;
        if(f<=0 || f>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }
    while(f<=0 || f>N); 
    do
    {
        cout<<"Columnas: ";
        cin>>c;
        if(c<=0 || c>N){
            cout<<"Error!!!!.\n";
            getch();
        }
    }
    while(c<=0 || c>N);

 }  
 void LlenarMatriz (int ma [][N],int fil,int col)
 { 
  for (int i=0; i<fil;i++)
    {
        for (int j=0;j<col;j++)
        {
          ma[i][j] = 1 + rand() % (21 - 1);
        }
    }   
  }
void MostrarMatriz (int ma[][N],int fil,int col)
{
for (int i=0; i<fil;i++)
    {
        for (int j=0;j<col;j++)
        {
          cout<<setw(4)<<ma[i][j];
        }
        cout<<"\n";
    }
}

void SumParImparMatriz (int ma [][N],int fil, int col ,int &contP,int &contI,int &sumaPar, int &sumaImpar)
{
for (int i=0; i<fil;i++)
{
    for (int j=0; j<col;j++)
    {
        if (ma[i][j]%2==0)
        {
            sumaPar = sumaPar + ma [i][j];
            contP++;
        }
        else 
        {
            sumaImpar = sumaImpar + ma [i][j];
            contI++;
        }
    }
}
}

void BuscarMayorMenor (int ma [][N],int fil, int col, int &mayor , int &menor)
{
    
    for (int i=0; i<fil;i++)
{
    for (int j=0; j<col;j++)
    {
       if (ma[i][j] > mayor){
        mayor = ma [i][j];
       }
      if (ma [i][j] < menor){
       menor = ma[i][j] ;
      }
    }
}
}    

void  MayorMenorDeFila ( int ma [][N], int fil, int col, int &may, int &men, int &i, int &j)
{
    for (int i=0; i<fil;i++)
    {
    may=ma[i][0];
    men=ma[i][0];
    for (int j=0; j<col;j++)
        {              
            if (ma[i][j] > may)
                {
                may= ma [i][j];
                 }
            if (ma [i][j] < men)
                {
                men = ma[i][j];       
                }     
        }
   }
}
        
    /*cout<<"el mayor de la fila"<<i+1<<"es :"<<may<<endl;
    cout<<"el menor de la fila"<<i+1<<"es: "<<men<<endl;
    }
  
   */ 


  //  LA SIGUIENTE  ES UNA FUNCION QUE "BAJÉ" PARA IMPRIMIR LOS VALORES DE UN ANILLO INTERIOR PERO NO LOGRE ENTENDER MUY BIEN COMO FUNCIONA
  // DE TODAS MANERAS SE IMPIME EN UNA SOLA FILA



  void PrintAnillo (int ma[][N],int fil, int col,int &NumAnillo)
    {
    int TamAnillo = 2 * ( fil - NumAnillo * 2) + 2 * ( col - NumAnillo  * 2 ) - 4;
    
   int i=0,j=0;
    for (i = NumAnillo ; i < (fil -  NumAnillo);i++){
        cout<<ma[i][NumAnillo]<<" ";
    }
        for (j = NumAnillo + 1; j < (col - NumAnillo); j++ )
        {
            cout<<ma[fil - NumAnillo - 1][j]<<" ";
        }
        if (NumAnillo > 2 * (fil - NumAnillo * 2) - 1) 
        {
         for (i = fil - NumAnillo - 2; i >= NumAnillo; i--) 
          {   
          cout << ma[i][col - NumAnillo - 1] << " ";
        }
    }
    if (TamAnillo > 2 * (col - NumAnillo * 2) - 1) {
        for (j = col - NumAnillo - 2; j > NumAnillo; j--) 
        {
            cout << ma[NumAnillo][j] << " ";
        }
    }
    
}

// OTRA PRUEBA DE IMPRESION DE ANILLO PERO SALE TIPO # JAJAJA
// USANDO SETW() PROBANDO EL VALOR ( ) PARA Q NO SE SUPERPONGAN LOS NROS

/*
void ImpAnillo (int ma[][N],int fil, int col, int &NumAnillo)
{
    int i,j;
    
        for (i=0; i<fil; i++)
        {
        for (j=0; j<col; j++)
        {
          //  while (i <= (fil - (NumAnillo * 2)) && j <)
            if (i!=NumAnillo-1 && i != (fil -NumAnillo-1))
            {
                 if (j== NumAnillo || j == (col - NumAnillo ))
                 {
                    cout<<setw(4)<<ma[i][j];
                 }
                 else{
                     cout<<" ";
                 }
                }
                 else{
                      cout<<setw(4)<<ma[i][j];
                 }
        }
       cout<<endl;
    }
   } 
   */
   
/*
void ImpAnillo (int ma[][N],int fil, int col, int &NumAnillo)
{
   int i,j;
    
    for (i=0; i<fil; i++){
        for (j=0; j<col; j++){
            if( (i==NumAnillo && j>=NumAnillo) && j<=(col-1)-NumAnillo || i<=(col-1)-NumAnillo && ){
                cout<<setw(4)<<ma[i][j];
            }       
            else{
                cout<<setw(4)<<" ";
            }
        }
        cout<<endl;
    }
}
*/
void ImpAnillo (int ma[][N],int fil, int col, int &NumAnillo)
{
int i,j;
    
    for (i=0; i<fil; i++){
        for (j=0; j<col; j++){
            if( (i==NumAnillo && j>=NumAnillo) && j<=(col-1)-NumAnillo
            ||   i==(fil-1)-NumAnillo&& j>=NumAnillo && j<=(fil-1)-NumAnillo
            ||   j==NumAnillo && i<=(col-1)-NumAnillo && i>=NumAnillo
            ||   j==(col-1)-NumAnillo && i>=NumAnillo && i<=(col-1)-NumAnillo){
                cout<<setw(4)<<ma[i][j];
            }       
            else{
                cout<<setw(4)<<" ";
            }
        }
        cout<<endl;
    }
}
