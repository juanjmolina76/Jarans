#include <iostream>

struct Categorias
{
    char categoria[20];
}categ[5];
struct DatosElementos
{
    char nombre[20];
    char id[];
    struct categ DatElCat;
};
struct DatosProductoGeneral
{
    int CantUnidxCaja;
    char FormaColocacion[10];
    struct categ DatProd;
};
std::cout<<"Ingrese las CATEGORIAS: "<<i+1<<" ";
std::cin>>categ[];


