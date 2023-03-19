// directivas del procesador:
#include <iostream>
#include <conio.h>

using namespace std;
//prototipos de funcion:
int producto (int x, int y);
int potencia (int x, int y);
//funcion principal:
int main ()
{
    int n,pot;
    cout<<"digite un nro y su potencia: ";
    cin>>n>>pot;

    cout<<potencia(n,pot)<<endl;
    getch ();
    return 0;
}
//defino la funcion potencia:
int potencia(int x , int y)
{
if(y==0)
    {
    return 1;
    }
    else 
    {
    //retorno a la funcion potencia el resultado de producto:
    return producto (x,potencia(x,y-1));
    }
// defino la funcion producto:
}
int producto (int x, int y)
    {
    int prod = 0;
    for (int i = 0 ; i < y ; i ++)
    {
    prod+= x;
    }
    return prod;
}