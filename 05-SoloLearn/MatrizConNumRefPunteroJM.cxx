#include<iostream>
//#include<conio.h>
using namespace std;

void elevar_cuadrado (int ma[][100], int *fptr, int*cptr)
{
int m[*fptr][*cptr];
for (int i=0; i< (*fptr);i++)
{
    for (int j=0; j<(*cptr);j++)
    {
        m[i][j]=ma[i][j]*ma[i][j];
    }
}
for (int i=0; i< (*fptr);i++)
{
    for (int j=0; j<(*cptr);j++)
 {
     cout<<m[i] [j] <<" ";
 }
 cout<<endl;
}
}
int main ()
{
int ma[100][100],f,c;
cout<<"ingrese el nro de filas y columnas respectivamente: "<<endl;
cin>>f>>c;

for (int i =0; i<f;i++)
{
    for (int j=0;j<c;j++)
    {
        cout<<"ingresa la posicion ["<<i<<"], ["<<j<<"]";
        cin>>ma[i][j];
    }
}
        for (int i =0; i<f;i++)
{
    for (int j=0;j<c;j++)
    {
        cout<<ma[i][j];
    }
}
    cout<<endl;
    cout<<endl;
    
    elevar_cuadrado (ma,&f,&c);
   // getch();
   return 0;     
}