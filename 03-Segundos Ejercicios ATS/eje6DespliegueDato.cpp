#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>
int maximo(TIPOD d[3]);

int main()
{
    int n[3];
   
    for (int i=0;i<3;i++)
    {
        cout<<"Introduzca numero "<<i+1<<": "; cin >> n[i];
    }
    cout<<"El numero mas grande es: "<< maximo(n);

    getch();
    return 0; 
}

template <class TIPOD>
int maximo (TIPOD d[3])
{
    TIPOD max;  
    int top=0;
    for (int i=0; i<3;i++)
    {
        if(d[top]<d[i+1])
        {
            top=i+1;
        }
    }
    max=d[top]; 
    return max; 
}

