/*
pedir que ingrese un texto de 4 numeros.
Dividir el texto en dos numeros de dos en dos.
Sumar cada uno de los numeros.
*/


#include <iostream>
#include <stdlib.h>

int main(){
    char  texto[4],texto1[2],texto2[2];
    int numero1,numero2,suma=0;
    std::cout<<"Ingresa un cuatro numeros: ";
    std::cin>>texto;

    texto1[0]=texto[0];
    texto1[1]=texto[1];
    texto1[2]='\0';
    numero1=atoi(texto1);
 /*el ultimo caracter es un nulo para cerrar nuestro texto*/
    

    texto2[0]=texto[2];
    texto2[1]=texto[3];
    texto2[2]='\0';
    numero2=atoi(texto2);

    suma=numero1+numero2;
    std::cout<<"Esta es la suma "<<suma<<"\n";

    system ("pause");
    return 0;
}