#include <iostream>
int main(){
    int numeros[]={1,2,3,4,5},suma=0;
    for (int i = 0; i < 5; i++)
// (int i = 1; i < 5; i++) antes inicializabamos en 1 pero ahora 
/*necesitamos iniciar a contar desde e primer registro, el 0 (cero) 
ademas ponia i <= 5 pero ahora debo pones solo i < 5 ya que comienza a
contar desde el id 0 (cero) */

    {
        suma=suma+numeros[i];
        std::cout<<numeros[i]<<"+";
    }
    std::cout<<"\nAqui esta tu suma: "<<suma<<"\n";


    system ("pause");
    return 0;
}