#include <iostream>

struct DatosPersonales
{
    char Nombre[65];
    char Apellido[65];
    int dni [20];
};
struct Direccion
{
    char Provincia [65];
    char Ciudad [65];
    char Calle [65];
    int NumeroCalle [10];
};
struct Identificacion
{
    int id[5];
    char Categoria [10];
};
struct Empleados
{
    struct DatosPersonales datPerEmpleados;
    struct Direccion direEmpleados;
    struct Identificacion ideEmpleados;
}e1,e2,e3;
struct Clientes
{
    struct DatosPersonales datPerClientes;
    struct Direccion direClietes;
    struct Identificacion ideClientes;
}c1,c2;
    int main (){

    /*    Pido los datos a los EMPLEADO 1*/
    std::cout<<"EMPLEADO 1: "<<"\n";
    std::cout<<"Nombre: "<<" ";std::cin>>e1.datPerEmpleados.Nombre;
    std::cout<<"Apellido: "<<" ";std::cin>>e1.datPerEmpleados.Apellido;
    
    /*  Pido la direccion de EMPLEADO 1*/
    std::cout<<"\nProvincia: "<<" ";std::cin>>e1.direEmpleados.Provincia;
    std::cout<<"\nCiudad: "<<" ";std::cin>>e1.direEmpleados.Ciudad;
    
    
    /*    Pido los datos a los EMPLEADO 2*/
   

    /*  Pido la direccion de EMPLEADO 2*/
    

    /*  Muestro los datos de los EMPLEADOS*/
    /*  EMPLEADO 1*/
    std::cout<<"Empleado : "<<e1.datPerEmpleados.Nombre<<" "<<e1.datPerEmpleados.Apellido<<e2.datPerEmpleados.Apellido;
    std::cout<<"\nUbicacion : "<<"\n"<<"Provincia: "<<e1.direEmpleados.Provincia<<"\n";
    std::cout<<"Ciudad :"<<e1.direEmpleados.Ciudad<<"\n";
    /*  EMPLEADO 2*/
    


    system ("pause");
    return 0;
}
 



