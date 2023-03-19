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
for (int j=0; j<n; j++) {      
    if(j % 2!=0) {
               /*  for(int i=0; i<n; i++) {   
            matriz[i][j] = contador;
            contador++;   */
             for(int i = n-1 ;i>=0 ;i--){
             matriz[i][j] = contador;
            contador++; 
                                    
        }     
         }    
          else{
            /* for(int i = n-1 ;i>=0 ;i--){
             matriz[i][j] = contador;
            contador++; */
            
            for(int i=0; i<n; i++) {   
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