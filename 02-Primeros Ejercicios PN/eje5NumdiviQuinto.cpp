#include <iostream>
using namespace std;


int main()
{
int numero[5];
float division;
int suma=0;


    cout<<"Digite 5 numeros: ";
    for (int i = 0; i < 5; i++)
    {   
        do
        {
        cout<<"numero: "<<i+1;
        cin>>numero[i];
        }
        while (numero[5]%2==0)
        
            suma = numero[0]+numero[1]+numero[2]+numero[3];
          
        if (numero[5]%2==0);
        {
        cout<<"la division de los numeros es "<<division;
        }
        if (numero[5]%2!=0);
        {
        cout<<"La suma de los numeros es: "<<suma;
        }
            
    system ("pause");
    return 0;
}

