/*Estas trabajando en un sistema de tickets. 
Un ticket cuest 10 dólares.
La oficina está llevando a cabo una campaña de descuentos: cada grupo 
de 5 personas recibe un descuento, que se determina en función de la 
edad de la persona más joven del grupo. 
Necesitas crear un program que tome las edades de las 5 personas como 
entrada y genere el precio total de los tickets. 
Ejemplo de entrada;
55
28
15 <
38
63

Salida:
52.5

La edad más joven es de 15 años, así que el grupo obtiene un 15% de descuento del precio total
, que es $50 - 15% = $42,5.-

*/

#include <iostream>


using namespace std;

int main ()
{
    float edad [5], menor=115, desc;
  
    for (int i = 0; i < 5; i++)
    {
         cin>>edad[i];
    }
    for (int i = 0; i < 5; i++)
    {
         if (edad[i]<menor)
            {
             menor = edad[i];
             }
    }
    desc = 50 - (50 * (menor / 100 ));
       
    cout<<"\n"<<desc<<"\n";
    
    system ("pause");
    return 0;
    
}