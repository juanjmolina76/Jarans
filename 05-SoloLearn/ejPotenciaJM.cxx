#include <iostream>
/*#include <conio.h>*/
/*#include <math.h>*/
using namespace std;
/*Prototipos de funciones */
void ingDatos();
void potencia ( double x,double y);
/*variables globales*/
double base;
    double esp;
int main()
{
    
ingDatos();
potencia( base,esp);
   system("pause") ;
   return 0;      
}
/*defino la funcion ing Datos*/
   void ingDatos()
   {
    double base;
    double esp;
    std::cout<<"Digite el numero base y luego el exponente: ";
    std::cin>>base;
    std::cin>>esp;
      } 
 /*defino la funcion potencia 
    void potencia( int x,int y)
    {
         long resultado=1;
         
        for (int i = 1; i <=y ; i++) 
        {
        resultado = resultado * x;
        }
        std::cout<<"el resultado es: "<<resultado<<endl;
        
         */
        //defino la funcion potencia
    void potencia (double x,  double y)
     {
        
        double res=1;
    
            for ( int i= 1 ; i <=y ; i++)
            {
                res=res*x;
            }
         std::cout<<"el resultado es: "<<res<<endl;
        
        
    }
    