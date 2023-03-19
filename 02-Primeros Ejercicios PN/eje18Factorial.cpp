#include <iostream>
main (){
    int numero,factorial=1;

    do
    {
        std::cout<<"Ingresa un numero mayor o igual a 1: ";
        std::cin>>numero;
    } while (numero<1 );
    for (int i =1; i <= numero; i++)
    {
        factorial=factorial*i;
        std::cout<<i<<"X";

    }
        std::cout<<"Este es el factorial: "<<factorial<<"\n";
        


    system ("pause");
    return 0;
}