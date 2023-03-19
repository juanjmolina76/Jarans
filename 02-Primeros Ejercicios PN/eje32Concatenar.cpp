#include <iostream>
#include <string.h>

int main(){
    char nombre[20],apellido[20],nombreApellido[40]={};
    /*con ese nombreApellido[40]={} inicialicé la variable nombreApellido para 
    que no marque ningun error con caracteres de control al inicio
    o bien podria usar en vez de strcat, strcpy(nombreApellido,nombre); */
    std::cout<<"Ingresa tu nombre: ";
    std::cin>>nombre;
    std::cout<<"Ingresa tu apellido: ";
    std::cin>>apellido;
    strcat(nombreApellido,nombre);
    strcat(nombreApellido, " ");
    strcat(nombreApellido,apellido);
    std::cout<<"Este es tu nombre completo: "<<nombreApellido<<"\n";
    system("pause");
    return 0;
}


