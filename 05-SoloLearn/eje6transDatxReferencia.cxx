#include <iostream>
#include <conio.h>
//traspaso de datos por referencia
using namespace std;

//plantilla de funcion

//prototipo de funcion
int trasDat (int &, int & );
 
 //variables globales

int num1, num2;

int main()
{

cout<<"digite dos numeros: ";
cin>>num1>>num2;

trasDat (num1,num2);        

cout<<"\nel nuevo valor del primer numero es: "<<num1;
cout<<"\nel nuevo valor del segundo numero es: "<<num2;
    
}

int trasDat (int & xnum, int & ynum)
{
    cout<<"el valor del primer numero es: "<<num1;
    cout<<"\nel valor del segundo numero es: "<<num2;
    
    xnum=45;
    ynum=13;
}

