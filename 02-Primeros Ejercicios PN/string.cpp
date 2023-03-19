#include <iostream>

int main(){
    char programador[]="programador";
    std::cout<<programador<<"\n"<<sizeof(programador)<<"\n";

    /*
    Esta es otra forma de declarar un string pero da errores:
    char novato[]={'n','o','v','a','t','o'};
    std::cout<<novato;*/
/*
    char nombre[5];
    std::cout<<"Ingresa tu nombre: ";
    std::cin>>nombre;
    std::cout<<"este es tu nombre:"<<nombre<<sizeof(nombre);
    */
    char name[10];
    std::cout<<"tu nombre es: ";
    /*
    En lugar de usar cin:
    std::cin>>name;
    usamos gets(variable) 
    para pedir que la el elemento del string ingrese a la variable 
    con el espacio tambien
    */
    gets(name);
    std::cout<<name<<"\n";

    system ("pause");
    return 0;
}  