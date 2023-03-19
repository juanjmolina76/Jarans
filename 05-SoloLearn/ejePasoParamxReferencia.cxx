#include <iostream>
#include <conio.h>
//traspaso de datos por referencia
using namespace std;

//plantilla de funcion

//prototipo de funcion
void nuevoDat (int &, int & );
 
int main()
{
int num1, num2;
        
cout<<"digite dos numeros: ";
cin>>num1>>num2;

nuevoDat (num1,num2);

cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
}

void nuevoDat (int & xnum, int & ynum )
{
   cout<<"El valor del primer numero es: "<<xnum<<endl;
   cout<<"El valor del segundo numero es: "<<ynum<<endl;
   
   xnum = 89;
   ynum = 45;
}


