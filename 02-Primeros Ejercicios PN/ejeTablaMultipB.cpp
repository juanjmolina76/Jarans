

#include <iostream>

int main(){
    int numero,i;
    regresar:
    std::cout<<"Humano elige un numero de 1 a 10 para darte la tabla de ese numero:\n";
    std::cout<<"valor=";std::cin>>numero;
    if(numero>=0 && numero<=10) {
        std::cout<<"Humano el numero que elegiste es: ";std::cout<<numero;std::cout<<"\n";

        for (i=1;i<=10;i=i+1){
        std::cout<<i<<"x"<<numero<<"="<<i*numero<<"\n";
        }
    }
     else{
         std::cout<<"Humano el numero no corresponde vuelve a elegir:\n ";
         goto regresar;
     }
     switch (numero)
     {
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
        system ("color A0");
        break;
    default:
        system ("color C0");
        break;
     }       
    system("pause");
    return 0;
}