/*
Declarar la estructura materias con nombre de la materia y calificacion.
Inicializar el nombre de cada materia.
Pedir que se ingresen las calificaciones de las materias.
Obtener el promedio.
Mostrar un mensaje en caso de que el alumno tenga 5,6,7,8,9,10 o mas.

*/


#include <iostream>

struct Materias
{
    char nombre[50];
    float calificacion;

}materia[6]={{"Fisica",0},{"Quimica",0},{"Sociales",0},{"Geografia",0},{"Mate",0},{"Programacion",0}};
int main(){
    float suma=0,promedio;
    std::cout<<"Ingresa las calificaciones de cada materia:\n";
    for (int i = 0; i < 6; i++)
    {
        std::cout<<"Calificacion de "<<materia[i].nombre<<": ";
        std::cin>>materia[i].calificacion;
    /*}
    for (int i = 0; i < 6; i++)
    {*/
        suma=suma+materia[i].calificacion;
    }
    promedio=suma/6;
    std::cout<<"Promedio: "<<promedio<<"\n";
    if (promedio<=5.9)
    {
        std::cout<<"Alumno, no has aprobado\n";
    }
    if (promedio>=6 && promedio<=6.9)
    {
        std::cout<<"Apenas safaste "<<"\n";        
    }
    if (promedio>=7 && promedio<=8.9)
    {
        std::cout<<"Bien hecho! "<<"\n";         
    }
    if (promedio>=9 && promedio<=10)
    {
        std::cout<<"Sos casi un genio "<<"\n";        
    }
    if (promedio>10)
    {
        std::cout<<"Sos casi programador!!! "<<"\n";        

    }
    system ("pause");
return 0;
}
