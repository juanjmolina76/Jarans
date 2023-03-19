/*
Pedir que ingrese un palindromo
Si la palabra no es palindromo, retarlo
Si la palabra es un palindromo, felicitarlo
*/

#include <iostream>
#include <string.h>
int main(){
    char texto[40],textoRev[40];
    regreso:
    std::cout<<"Escribe un palindromo: "<<"\n";
    std::cin>>texto;
    strcpy(textoRev,texto);
    strrev(textoRev);
    if(strcmp(texto,textoRev)!=0){
        std::cout<<"Estupido, esto ("<<texto<<" "<<textoRev<<") no es un palindromo\n";
        goto regreso;
    }
    std::cout<<"Felicitaciones, esto ("<<texto<<" "<<textoRev<<") es un palindromo"<<"\n";
    system ("pause");
    return 0;
}