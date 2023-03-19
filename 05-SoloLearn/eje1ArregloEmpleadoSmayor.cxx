/*


*/
#include <iostream>
#include <string.h>

struct empleados
{ 
char nombre[65];
float sueldo;
}empleado[3];
int main()
{
    int n;
    int smayor=0,posM;
    do 
         {
         std::cout<<"digite la cantidad de   empleados";
         std::cin>>n;
        }
        
        while ((n<1) || (n>3));
        for (int i = 0; i < n; i++)
        {
        std::cout<<"nombre :";
        std::cin>>empleado[i].nombre; 
        }
        for (int i = 0; i < n; i++)
        {
         std::cout<<"\nel sueldo de "<<empleado[i].nombre<<"  es de: ";
        std::cin>>empleado[i].sueldo;
        }
        
          for ( int i = 0 ; i < n; i++)
          {
          if (empleado[i].sueldo>smayor)
          {
          smayor=empleado[i].sueldo; 
         posM=i; 
          }
          }
    
    /*
    for ( int i = 0 ; i < n; i++){
        if (empleado[i+1].sueldo<smayor)
        empleado[i]=posM;
    }
    std::cout<<"el sueldo de "<<empleado[posM].empleado<<"es el mayor "<<": "<<empleado[posM].sueldo;
    
 for ( int i = 0 ; i < n; i++){
        if (empleado[i].sueldo>smenor)       
        empleado[i]=posm;
 }
          std::cout<<"el sueldo de "<<empleado[posm].empleado<<"es el menor "<<": "<<empleado[posm].sueldo;
    
    }
    */
    
    //mostrar los datos
    for (int i = 0 ; i < n ; i++)
    {
    std::cout<<"\nel empleado "<<i+1<<" "<<empleado[i].nombre<<", tiene un  sueldo de: "<<empleado[i].sueldo<<"\n";
    }
    
   std::cout<<"\nel sueldo mayor es de "<<smayor<<"\n";
  /* std::cout<<"corresponde a "<<empleado[i].nombre<<"\n";
  */
   std::cout<<"\ncorresponde a                             "<<empleado[posM].nombre;
    std::cout<<"\n";
    
    system ("pause");
    return 0;
}