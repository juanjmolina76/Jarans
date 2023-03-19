#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arreglo[100],tamano,mayor=0;
   
   do
       {  
    	cout<<"ingresa el tamano del arreglo: ";
    	cin>>tamano;
       }
	while ((tamano<1) || (tamano>100));
	
	for( int i=0; i < tamano; i++)
       {
	      cout<<"N°"<<(i+1)<<": ";
    	  cin>>arreglo[i];
    	}
	      for (int  i= 0; i < tamano; i++)
	      
	     // 1 2 5 4 3
	      
	       {
	           if (arreglo[i]>mayor)
	           {
	            mayor = arreglo [i]  ;
	           }
	       }
    cout<<"Este es el numero MAYOR entre los elementos del arreglo: "<<mayor<<"\n";   
	getch ();
	return 0;
}