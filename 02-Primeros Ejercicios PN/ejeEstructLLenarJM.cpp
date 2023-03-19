#include <iostream>
#include <string.h>
    struct empleados
    {
        char nombre[65];
        float sueldo;
    }empleado[10];
int main(){
    int n;
    std::cout<<"digite la cantidad de empleados: ";
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"empleado "<<empleado[i].nombre<<"nombre: ";
        std::cin>>empleado[i].nombre;
        std::cout<<"sueldo empleado "<<empleado[i].nombre<<" : ";
        std::cin>>empleado[i].sueldo;
          }
        //muestro los datos de empleado
    for (int i = 0; i < n; i++)
    {
        std::cout<<"\nel empleado "<<i+1<<": "<<empleado[i].nombre<<" "<<" tiene un sueldo de: "<<empleado[i].sueldo;    
      }
        std::cout<<"\n";
    system ("pause");
    return 0;

}
    