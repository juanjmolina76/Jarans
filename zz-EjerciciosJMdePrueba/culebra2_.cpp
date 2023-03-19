#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
int n; 
cout<<"indique la base: "<<endl;
cin>>n;
int matriz[n][n]; 
int contador = 1; 
for(int j=n-1; j>=0; j--) {     
           for (int i=0; i<n; i++) {
            matriz[i][j] = contador;
            contador++;    
            }
            if (n-j %2==0){
            for(int i=n-1; i>=0 ; i--) {     
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