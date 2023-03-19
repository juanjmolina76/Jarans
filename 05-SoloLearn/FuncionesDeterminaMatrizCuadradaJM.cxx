#include <iostream>
#include <conio.h>

using namespace std;

void tomarMatriz ();
void comprobarSimetria (int m, int nfil,int ncol);
void mostrarMatriz (int,int);

int m [100] [100], nfil,ncol,increm=0;

int main ()
{
tomarMatriz();
comprobarSimetria(m ,nfil,ncol);
//mostrarMatriz(m,t nfil,ncol);

getch ();
return 0;
}
void tomarMatriz ()
{
   cout<<"digite el numero de filas: ";
   cin>>nfil;
   cout<<"digite el numero de columnas: ";
   cin>>ncol; 
   
   for (int i =0; i < nfil ; i++)
       for (int j = 0; j < ncol ; j++)
       {
           cout<<"digite el numero: ["<<i<<"] ["<<j<<"]: ";
           cin>>m [i][j];
}
void comprobarSimetria (int m[][100], int nfil,int ncol)
{  
    if (nfil == ncol){
    for (int i = 0; i < nfil; i++)
        for (int j=0; j < ncol; j++){          
                if   m [i][j]==m[j][i]{
                       imcrem++;
                }
        }
    }
}
if ( increm== nfil*ncol){
                 cout<<"la matriz es simetrica";        }         
else {
       cout"la matriz no es simetrica"
}     
/*{void mostrarMatriz (int m[][100], int tam)
{   
}*/

