/*
Eje 4 Video 60 ATS
Hacer un arreglo de estructura llamada atleta
para N atletas que contenga los siguiente campos: nombre, pais,
numero_medallas. Y que devuelva los datos 
(Nombre, pais) del atleta que haya ganado el mayor
numero de medallas.
*/

#include <iostream>

using namespace std;

struct Atleta{
    char nombre[65];
    char pais[65];
    int n_medallas;
}atletas[100];

int main (){
    int n_atletas,mayor=0,posM=0;
// pido la cantidad de atletas

    cout<<"Ingrese el numero de atletas (entre 0 y 100): ";
    cin>>n_atletas; 


//Cargo los datos de los n_atletas
for (int i = 0; i < n_atletas; i++){
    fflush (stdin);
    cout<<"Nombre: ";cin.getline(atletas[i].nombre,65,'\n');
    cout<<". Pais: ";cin.getline(atletas[i].pais,65,'\n');
    cout<<". numero de medallas: "; cin>>atletas[i].n_medallas;

/*comparar los valores de numeros de medallas
Encontrar el mayor numero de medallas
*/
    if (atletas[i].n_medallas > mayor){
        mayor = atletas[i].n_medallas;
        posM = i; 
    }
    cout<<"\n";
}
/* Muestro los datos de la posicion que tiene 
mayor numero de medallas
*/
    std::cout<<"El atleta que ganó MAs medallas es: "<<" "<<atletas[posM].nombre<<" "<<"del Pais: "<<atletas[posM].pais<<"\n";

    system("pause");
    return 0;
}