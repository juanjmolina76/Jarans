#include <iostream>

int main()
{
int numero,contPos=0,contNeg=0,cont=0;

     std::cout<<"Ingrese numeros (+) ó (-) hasta que ingrese 0 (cero) ";
     do
     {
      std::cout<<"\nNumero: ";
      std::cin>>numero; 
      
            if (numero > 0 ) 
             {
                contPos++;
                }
                if (numero < 0 ) 
             {
                 contNeg++;
             }
             cont++;
            } 
             while (numero != 0);
        
        
        std::cout<<"la cantidad de n°(+) fue: "<<contPos;
        std::cout<<"\n";
        std::cout<<"la cantidad de n°(-) fue: "<<contNeg<<"\n";
         std::cout<<"la cantidad de n° fue: "<<cont-1<<"\n";      
   
  
 system ("pause") ;
 return 0;
    
}