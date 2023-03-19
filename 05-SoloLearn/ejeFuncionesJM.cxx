#include<iostream>
#include<conio.h>

using namespace std;
//prototipo de funcion
float encontrarMax (float x,float y);
float potencia(float x,float y);
int main()
    {

    float n1,n2;
    float maximo;
    float pot;
    cout<<"Digite dos numeros:  ";
    cin>>n1>>n2;

    maximo=encontrarMax(n1,n2);
    cout<<"el numero mayor es:                             "<<maximo<<"\n";
    pot=potencia(n1,n2);
    cout<<"la potencia de "<<n1<<" elevado a la "<<n2<<" es: "<<pot;

    system ("pause");
    return 0;

    }
//definicion de funcion
    float encontrarMax(float x,float y)
    {
        
    float nMax;

        if (x>y)
        {
            nMax=x;
        }
        else
        {
            nMax=y;
         }
        return  nMax;
          }
  //defino la funcion potencia
    float potencia (float x, float y)
     {
        
        float res=1;
    
            for ( int i= 1 ; i <=y ; i++)
            {
                res=res*x;
            }
        return res;
        }
        
        
  
  
       
        