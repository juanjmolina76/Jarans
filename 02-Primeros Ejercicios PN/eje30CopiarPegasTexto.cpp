/*
Definir un string.
Declarar un string con una medida de 10.
Copiar el primer string en el segundo.
*/



#include <iostream>
#include <string.h>
int main(){
    char texto1[]="programador novato";
    char texto2[10];


/*no se puede hacer asi: 
   texto2=texto1;
   debo llamar a la libreria <string.h>
   para usar el strcpy*/
    strcpy(texto2,texto1);
    std::cout<<texto2<<strlen(texto2)<<"\n";
    system ("pause");
    return 0;
}