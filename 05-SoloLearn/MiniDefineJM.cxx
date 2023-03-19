#include<iostream>
using namespace std;
# define N 5

int main()
{
    int m[N];
    for (int i=0;i<N;i++)
    {
cout<<"ingrese la posicion "<<i+1<<":";
cin>>m[i]  ;
    }
cout<<"\nlos nros ingresados son: ";

 for (int i=0; i<N;i++)
 {
 cout<<m[i]<<" ";
    
 }
    
       
 system ("pause");        
 return  0;             
}


