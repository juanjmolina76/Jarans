/*
Pedir que ingrese un texto en minusculas o en mayusculas.
Pedir otro texto similar al anterior.
Si no es la misma palabra retar, de lo contrario felicitar.
*/
#include <iostream>
#include <string.h>
int main(){
    char texto1[40],texto2[40];
    retornar:
    std::cout<<"Ingresa un texto: ";
    std::cin>>texto1;
    std::cout<<"Ingresa un texto similar al anterior (sin tomar en cuenta mayusculas o minusculas): ";
    std::cin>>texto2;
    strupr(texto1);
    strupr(texto2);
    if(strcmp(texto1,texto2)!=0){
        std::cout<<"Estupido, las palabras ("<<texto1<<" "<<texto2<<") no son similares. Intentalo de nuevo\n";
        goto retornar;
    }
    std::cout<<"Humano bueno, ahora dame la patita\n";
    system ("pause");
    return 0;
}