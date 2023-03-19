#include <iostream>

int main(){
    int numeroIngresado,numeroAencontrar=5;
    /*regreso:*/
    std::cout<<"Ingresa el numero mayor o igual al que estoy pensando:";
    std::cin>>numeroIngresado;
    if(numeroIngresado>=numeroAencontrar){
    std::cout<<"Que bien jugado hdp!!!\n";
    }
    else{ 
    std::cout<<"Segui intentando\n";
    }
    //goto regreso;
    system("pause");
    return 0;
}