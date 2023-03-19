/*
Crear un arreglo de estructura con id y nombre para 2 empleados.
Pedirle  al usuario que ingrese los datos del empleado.
Validar que el id contenga solo numeros y que tenga 6 digitos.
*/


#include <iostream>

struct Empleado
{
    char id[6];
    //aunque el id van a ser numeros, necesito declararla como cadena de caracteres char
    char nombre[60];

}empleado[2];

int main(){
    
    bool esNumero=true;
    //para validar que el dato de id es numero
    std::cout<<"Ingresa los datos de los empleados (el id debe tener 6 numeros)"<<"\n";
    for (int i = 0; i < 2; i++)
    // secuencia hasta 2 porque son dos empleados
    
    {
        regresa:
        esNumero=true;
        std::cout<<"Empleado"<<i+1<<" id:";std::cin>>empleado[i].id;
        for (int j = 0; j < 6; j++)
        {
            if( int(empleado[i].id[j])<=47 || int (empleado[i].id[j])>=58) 
            {
                esNumero=false;
                std::cout<<"El id "<<empleado[i].id<<" no es valido, ingresalo de nuevo";
                goto regresa;
            }
        }
        std::cout<<"Empleado"<<i+1<<" nombre:";std::cin>>empleado[i].nombre;

    }
    std::cout<<"\n";
    for (int i = 0; i < 6; i++)
    {
        // imprimo los ddatos de los empleados
        std::cout<<"id: "<<empleado[i].id<<"\n";
        std::cout<<"Nombre: "<<empleado[i].nombre<<"\n";
        std::cout<<"\n";
        
    }
    




}