/*
Hacer 2 estructuras, una lamada promedio que  tendrá los siguientes campos: nota1, nota2, nota3; y otra 
llamadaalumno que tendrá los sigientes datos; nombre, sexo, edad; luego acer qu ela estructura promedio
esté andidada en la estructura alumno. 
Luego pedir los datos para UN alumno. Luego calcular su promedio.  y por ultimo imprimir todos los datos
incluido el promedio


eje 6 
Usar la misma estructura del eje 5 y ahora pedir los datos para N alumnos y calcular
cual de todods tiene el memor promedio, e imprimir sus datos.

*/

#include <iostream>
#include <conio.h>
#include <string.h>

struct promedio
{
    float nota1;
    float nota2;
    float nota3;
    };

struct alumno
{
    char nombre[20];
    char sexo[10];
    int edad[10];
    struct promedio Prom;
}Alum1;

int main (){
int promedio_alumno;

cout<<"Digite el nombre: ";
cin>>getline(Alumno1.nombre,20,'\n';
cout<<"Digite el sexo: ";cin>>getline.Alum1.sexo,10,'\n';
cout<<"Digite la edad: ";cin>>getline.Alum1.edad,10,'\n';

cout<<"\nNotas del alumno:\n";
cout<<"Nota1: ";cin>>Alumno1.Prom.nota1;
cout<<"Nota2: ";cin>>Alumno1.Prom.nota2;
cout<<"Nota3: ";cin>>Alumno1.Prom.nota3;

promedio_alumno = (Alum1.Prom.nota1 + Alum1.Prom.nota2 + Alum1.Prom.nota3) / 3;

cout<<"\nDatos del alumno\n";
cout<<Alum1.nombre<<"\n";
cout<<Alum1.sexo<<"\n";
cout<<Alum1.edad<<"\n";
cout<<promedio_alumno;

    system ("pause");
    return 0;
}
