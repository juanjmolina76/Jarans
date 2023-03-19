#include <iostream>
int main(){
    int lista[]={7,2,5,4,1},valor,con,inf,mit,sup,tam;
    bool encontrado=false;
    tam=sizeof(lista)/sizeof(*lista);
    regresar:
    inf=0;
    sup=tam;
    con=0;
    

    std::cout<<"Ingresa un valor que pertenezca a la lista siguiente ";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<lista[i]<<" ";
    }
    std::cout<<"\nIngresa el valor: ";
    std::cin>>valor;

    while ((inf<=sup) && (con<tam))
    {
        mit=(inf+sup)/2;
        if (lista[mit]==valor)
        {
            encontrado=true;
            break;
        }
        if (lista[mit]>valor)
        {
            sup=mit;
            mit=(inf+sup)/2;
        }
        if (lista[mit]<valor)
        {
            inf=mit;
            mit=(inf+sup)/2;
        }     
        con++;

    }
    if (encontrado==false)
    {
        std::cout<<"Estupido, intentalo de nuevo :\n";
        std::cin>>valor;
        goto regresar;
    }
    if (encontrado==true)
    {
        std::cout<<"Bien hecho, el valor fue encontrado en la posicion: "<<mit+1<<" , felicidades ";
    }
    
    


    system ("pause");
    return 0;
}