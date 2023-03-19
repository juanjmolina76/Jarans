#include <iostream>
#include <string.h>
    struct empleados
    {
        char nombre[65];
        float sueldo;
    }empleado[3];
int main(){
    int n;
    int smayor=0,posM;
    do{
    std::cout<<"digite la cantidad de empleados: ";
    std::cin>>n;
    }
    while ((n<1) || (n>3));    
    for (int i = 0; i < n; i++)
    {
        std::cout<<"nombre : ";
        std::cin>>empleado[i].nombre;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<"\nel sueldo de "<<empleado[i].nombre<<" es de: ";
        std::cin>>empleado[i].sueldo;
    }
    for ( int i = 0; i < n ; i ++){
        if (empleado[i].sueldo>smayor){
            smayor=empleado[i].sueldo;
        }
        posM=i;
          }
        //muestro los datos de empleado
    for (int i = 0; i < n; i++)
    {
        std::cout<<"\nel empleado "<<i+1<<": "<<empleado[i].nombre<<" "<<" tiene un sueldo de: "<<empleado[i].sueldo;    
        std::cout<<"\n";
      }
      std::cout<<"\nel sueldo mayor es de "<<smayor<<"\n";
      std::cout<<"corresponde a "<<empleado[posM].nombre;
        std::cout<<"\n";
    system ("pause");
    return 0;
}
    