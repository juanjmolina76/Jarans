/*
Declarar la estructur empleados con nombre, año ingreso, años trabajando y dias vacaciones.
Pedirle al usuario que digite el año de ingreso del empleado.
Calcular los años trabajados en relacion al año actual.
Mostrar los dias de vacaciones por empleado.
0-3 años = 5 dias;
4-10 años = 10 dias;
11-100 años = 15 dias;
*/

#include <iostream>
#include <ctime>

struct Empleados
{
    char nombre[50];
    int anioIngreso;
    int aniosTrabajados;
    int diasVacaciones;




}empleado[3]={{"Pepe"},{"Maria"},{"Juan"}};

int main(){
    time_t t=time(NULL);
    tm* timePtr=localtime(&t);
    int anioActual=timePtr->tm_year+1900;
    std::cout<<"Ingresa los anios de ingreso de cada empleado: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Anio de ingreso "<<empleado[i].nombre<<": ";
        std::cin>>empleado[i].anioIngreso;
        empleado[i].aniosTrabajados=anioActual-empleado[i].anioIngreso;
        switch (empleado[i].aniosTrabajados)
        {
            case 0 ... 3: empleado[i].diasVacaciones=5; break;
            case 4 ... 10: empleado[i].diasVacaciones=10; break;
            case 11 ... 100: empleado[i].diasVacaciones=15; break;
        }
    }
    std::cout<<"\n\nDIAS DE VACACIONES POR EMPLEADO\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Al empleado "<<empleado[i].nombre<<" le corresponden "<<empleado[i].diasVacaciones<<" por sus "<<empleado[i].aniosTrabajados<<" anios trabajados "<<"\n";
     }
    system ("pause");
    return 0;

}


