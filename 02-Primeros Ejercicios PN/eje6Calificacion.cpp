#include <iostream>

int main(){
    float practicas,participacion,examen,res;
    std::cout<<"Ingrese los datos que se te piden a continuacion:\n";
    std::cout<<"Calificacion de Practicas:";std::cin>>practicas;
    std::cout<<"Calificacion de Participacion:";std::cin>>participacion;
    std::cout<<"Calificacion de Examen:";std::cin>>examen;
    practicas*=0.40;
    participacion*=0.20;
    examen*=0.40;
    res=practicas+participacion+examen;
    std::cout<<"\nAqui esta tu calificacion: "<<res<<"\n";

    system("pause");
    return 0;
}