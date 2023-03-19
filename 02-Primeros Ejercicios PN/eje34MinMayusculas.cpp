/*
Pedir que ingrese un texto en minusculas o en mayusculas.
Pedir otro texto similar al anterior.
Si no es la misma palabra, RETARLO, si es la misama FELICITAR.
Mostrar ambas palabras.
*/

#include <iostream>
#include <string.h>
int main (){
    char texto1[40],texto2[40];
    regresar:
    std::cout<<"ingresa un texto: ";
    std::cin>>texto1;
    std::cout<<"ingresa un texto similar sin importar mayusculas y minusculas. \n";
    std::cin>>texto2;
    strupr(texto1);
    strupr(texto2);
    if(strcmp(texto1,texto2)!=0){
        std::cout<<"El texto 1 ("<<texto1<<" "<<") y texto 2 ("<<texto2<<") no son similares"<<"\n";
        goto regresar;
    }
    std::cout<<"Te felicito, ahora dame la patita. :)\n";
    system ("pause");
    return 0;
}