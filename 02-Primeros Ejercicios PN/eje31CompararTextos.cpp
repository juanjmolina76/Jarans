/*
Definir dos strings.
Mostrar si:
    Son iguales-.
    Son diferentes.-
    Cual de los dos es mayor.

*/


#include <iostream>
#include <string.h>
int main (){
    char texto1[]="ayer";
    char texto2[]="viernes";
    int comparacion;
    comparacion=strcmp (texto1,texto2);
    if (comparacion==0){
        std::cout<<"ambos textos son iguales\n";
    }
    if (comparacion!=0){
        std::cout<<"ambos textos son diferentes\n";
        if (comparacion>0){
            std::cout<<"El texto 1 es mayor que el texto 2 ";
        }
        if (comparacion<0){
            std::cout<<"El texto 1 es menor que el texto 2\n";
        }
    }
    system ("pause");
    return 0;
}