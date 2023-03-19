#include <iostream>
#include <stdlib.h>
#include <string.h>
int main(){
    char texto[30]={};
    int la=0,le=0,li=0,lo=0,lu=0;
    int longitud=0;
    std::cout<<"Ingresa una frase con vocales: ";
    std::cin.getline(texto,30,'\n');
    longitud=strlen(texto);
    std::cout<<" [ "<<longitud<<" ] "<<"\n";
    for ( int i = 0; i < 30; i++)
    {
        switch (texto[i])
        {
        case 'a':la++; break;
        case 'A':la++; break;
        case 'e':le++; break;
        case 'E':le++; break;
        case 'i':li++; break;
        case 'I':li++; break;
        case 'o':lo++; break;
        case 'O':lo++; break;       
        case 'u':lu++; break;
        case 'U':lu++; break;
        }
    }
    std::cout<<"Aqui estan las veces que escribiste las vocales: \n";
    std::cout<<"Letra a:"<<la<<"\n";  
    std::cout<<"Letra e:"<<le<<"\n";
    std::cout<<"Letra i:"<<li<<"\n";
    std::cout<<"Letra o:"<<lo<<"\n";
    std::cout<<"Letra u:"<<lu<<"\n";
    system ("pause");
    return 0;
}