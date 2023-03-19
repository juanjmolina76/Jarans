#include <iostream>
int main(){
    int opcion;
    float total=1000,ingreso,egreso;
    regreso:

    std::cout<<"¡¡¡Bienvenido al Banco!!!\n";
    std::cout<<"Digita una opcion:\n";
    std::cout<<"1.- Ingreso de dinero\n";
    std::cout<<"2.- Retirar de dinero\n";
    std::cout<<"3.- Salir\n";
    std::cin>>opcion;
    switch (opcion)
    {
    case 1:
        std::cout<<"Cuanto dinero vas a ingresar\n";
        std::cin>>ingreso;
        total+=ingreso;
        std::cout<<"Tenes en el banco:$"<<total<<"\n";
        goto regreso;

    case 2:
        std::cout<<"Cuanto dinero deseas extraer\n";
        std::cin>>egreso;
        if(total<egreso){
            std::cout<<"No hay fondos suficientes, solo tienes:$"<<total<<"\n";
        }else{
            total-=egreso;
            std::cout<<"Te queda en el banco $:"<<total<<"\n";
        }
        goto regreso;
    case 3:
       break;
    default:
        goto regreso;
        break;
    }
    system ("pause");
    return 0;
}