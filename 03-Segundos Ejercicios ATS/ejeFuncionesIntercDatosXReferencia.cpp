#include <iostream>
#include <conio.h>

using namespace std;

void tranDat (int,int,int&,int&);

int main()
{
int num1,num2,s=0,p=0;

cout<<"Digite dos numeros : ";
cin>>num1>>num2;

tranDat (num1,num2,s,p);

cout<<"\nel resultado de la suma es: "<<s;
cout<<"\nel resultado del producto es: "<<p;
getch ();
return 0;

}

void tranDat (int x, int y, int & s, int & p)
{
s=x+y;
p=x*y;

}