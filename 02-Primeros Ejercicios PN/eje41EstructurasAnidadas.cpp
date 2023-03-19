/*
-Crear la estructura de la direccion.
-Crear la estructura de empleados.
-Crear la estructura de clientes.
-Anidar la estructura de la direccion en las estructuras de empleados y clientes.
-Pedir mostrar la informacion de empleados y clientes.
*/

#include <iostream>

struct Direccion
{
    char pais[64];
    char estado[56];
    char municipio[65];
    int calle;
};
struct Empleados
{
    char nombre[65];
    char id[6];
    struct Direccion DirEmpleados;
}e1={"Eugenio","5324","Mexico","DF","atlanta",12},
e2={"Pedro","556","Chile","quintaregion","Santiago",15};
struct Clientes
{
    char nombre[65];
    char id[6];
    struct Direccion DirClientes;
}c1,c2;

int main(){
    std::cout<<"EMPLEADO 1\nNombre: "<<e1.nombre<<"\nid:"<<e1.id<<"\nPais: "<<e1.DirEmpleados.pais<<"\n";
    std::cout<<"EMPLEADO 2\nNombre: "<<e2.nombre<<"\nid:"<<e2.id<<"\nPais: "<<e2.DirEmpleados.pais<<"\n";
/*Pido los datos de la DirClientes*/
    std::cout<<"CLIENTE 1\nNombre: ";std::cin>>c1.nombre;
    std::cout<<"\nIdentificador: ";std::cin>>c1.id;
    std::cout<<"\nPais: ";std::cin>>c1.DirClientes.pais;
    std::cout<<"\nEstado: ";std::cin>>c1.DirClientes.estado;
    std::cout<<"\nMunicipio: ";std::cin>>c1.DirClientes.municipio;
    std::cout<<"\nCalle: ";std::cin>>c1.DirClientes.calle;
    
    std::cout<<"CLIENTE 2\nNombre: ";std::cin>>c2.nombre;
    std::cout<<"\nIdentificador: ";std::cin>>c2.id;
    std::cout<<"\nPais: ";std::cin>>c2.DirClientes.pais;
    std::cout<<"\nEstado: ";std::cin>>c2.DirClientes.estado;
    std::cout<<"\nMunicipio: ";std::cin>>c2.DirClientes.municipio;
    std::cout<<"\nCalle: ";std::cin>>c2.DirClientes.calle;
/*Muestro los datos cargados recien de DirClientes*/
    std::cout<<"\n\nCLIENTE 1\nNombre: "<<c1.nombre;
    std::cout<<"\nid: "<<c1.id;
    
    std::cout<<"\nPais: "<<c1.DirClientes.pais;
    std::cout<<"\nEstado: "<<c1.DirClientes.estado;
    std::cout<<"\nMunicipio: "<<c1.DirClientes.municipio;
    std::cout<<"\nCalle: "<<c1.DirClientes.calle;

    std::cout<<"\n\nCLIENTE 1\nNombre: "<<c2.nombre;
    std::cout<<"\nid: "<<c2.id;
    std::cout<<"\nPais: "<<c2.DirClientes.pais;
    std::cout<<"\nEstado: "<<c2.DirClientes.estado;
    std::cout<<"\nMunicipio: "<<c2.DirClientes.municipio;
    std::cout<<"\nCalle: "<<c2.DirClientes.calle<<"\n";
    system ("pause");
    return 0;
}
