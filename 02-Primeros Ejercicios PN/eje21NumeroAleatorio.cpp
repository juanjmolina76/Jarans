#include <iostream>
#include <time.h>
int main(){
    int numero,aleatorio,contador=0;

    srand(time(NULL));
    /*funcion q prepara al sistema para generar un numero aleatorio*/
    aleatorio=1+rand()%100;

    do
    {
        std::cout<<"Ingresa un numero entre 1 y 100 ("<<aleatorio<<"):";
        std::cin>>numero;
        if(numero>aleatorio){
            std::cout<<"Estupido, el numero que ingresaste es mayor\n";
        }
        if (numero<aleatorio)
        {
            std::cout<<"Estupido, el numero que ingresaste es menor\n";
        }
        contador++;


    } while (numero!=aleatorio);
    std::cout<<"Felicitaciones lograste encontrar el numero despues de "<<contador<<" intentos.\n";
    system ("pause");
    return 0;
}