/*
Pedir que ingrese un texto de mas de 10 letras.
Si tiene menos de 10 letras, lo retamos.
Si tiene mas de 10 letras , lo felicitamos.

*/


#include <iostream>
#include <string.h>
main(){
    char texto[10];
    int longitud=0;
    regreso:
    std::cout<<"Ingresa un texto con un minimo de 10 letras: ";
    gets(texto);
    /*sizeof(texto)*/
    longitud=strlen(texto);
    if(longitud>=10){
        std::cout<<"Felicitaciones, ahora dame la patita\n";
    }
        else{
        std::cout<<"Tonto, te dije que mas de 10 letras, intentalo de nuevo\n";
        goto regreso;
    }
    /*por ahora uso goto pero mas adelante podre usar do while*/
    system ("pause");
    return 0;
}