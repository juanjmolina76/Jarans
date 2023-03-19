#include <iostream>
#include <conio.h>

using namespace std;
//prototipo de funcion
void traDat (int,int,int &,int &);

int main ()
{
   int n1,n2,s=0,p=0;
   cout<<"digite dos numeros: ";
   cin>>n1>>n2;
   traDat(n1,n2,s,p);
   cout<<"\nla suma es: "<<s;
   cout<<"\nel producto es: "<<p;
   getch();
   return 0;
}
void traDat (int x,int y,int & s,int & p)
{
  s=x+y;
  p=x*y;  
}