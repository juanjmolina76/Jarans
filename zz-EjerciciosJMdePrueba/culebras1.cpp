#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
int n; // número de filas y columnas
cout<<"indique la base: "<<endl;
cin>>n;
int matriz[n][n]; // definir la matriz
int contador = 1; // variable para almacenar los números ascendentes
for(int i=0; i<n; i++) {
    if(i % 2 == 0) { // si la fila es par
        for(int j=0; j<n; j++) {
            matriz[i][j] = contador;
            contador++;
        }
    } else { // si la fila es impar
        for(int j=n-1; j>=0; j--) {
            matriz[i][j] = contador;
            contador++;
        }
    }
}
   for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        cout <<setw(4)<<matriz[i][j] << " ";
    }
    cout << endl;  
    } 
system ("pause");
return 0;
}
