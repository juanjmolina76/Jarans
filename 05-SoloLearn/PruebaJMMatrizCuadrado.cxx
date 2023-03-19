 #include <iostream> 
 #include <conio.h> 
 using namespace std;
 
 void CalcularCuadrado (int matriz [][100], int filas, int columnas);
 void MostrarMatrizElevada (int matriz [][100], int filas, int columnas);

 int main()
 {
     
 int matriz [100][100], filas, columnas;
cout<<"ingrese cuantas filas tendra la matriz:";
 cin>>filas;
 cout<<"Ingrese cuantas columnas tendra la matriz:"; 
 cin>>columnas;
 
 for (int i=0; i < filas; i ++)
 {
 for (int j=0;j< columnas;j++) 
 {
 cout<<"ingrese la posicion "<<i+1<<","<<j+1<<":"; 
 cin>>matriz [i][j];
 }
 }
 cout<<"\n\n";
 
 
 for (int i=0; i < filas; i ++)
 {
 for (int j=0;j< columnas; j++)
 {
  cout<<matriz[i][j]<<" ";
 }
 cout<<"\n";
 }
 cout<<"\n";
 
CalcularCuadrado (matriz,filas, columnas);
MostrarMatrizElevada (matriz,filas, columnas);

getch ();
return 0;
 }

void CalcularCuadrado (int matriz[] [100], int filas, int columnas)
{
 for (int i=0; i < filas; i ++)
 {
 for (int j=0;j < columnas; j++)
 {
 matriz [i][j] = matriz [i][j] * matriz [i][j];
 }
 }
}

void MostrarMatrizElevada ( int matriz[] [100], int filas, int columnas)
 {
 for (int i=0; i< filas; i ++)
 {
 for (int j=0; j< columnas; j++) 
 {
 cout<<matriz [i][j]<<"_";
 }
 cout<<"\n";
 }
 }
 