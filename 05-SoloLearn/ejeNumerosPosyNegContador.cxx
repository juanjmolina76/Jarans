#include <iostream>
int main()
{
int numero,contPos=0,contNeg=0,cont=0;

     std::cout<<"Ingrese numeros (+) ó (-) hasta que ingrese 0 (cero) ";
     do
     {
      std::cout<<"\nNumero: ";
         std::cin>>numero; 
     for ( int i =0 ;i < cont   ; i++)
     {
        
         if (numero > 0 ) 
             {
                contPos++;
                }
                if (numero < 0 ) 
             {
                 contNeg++;
             }
        }
        cont++;
        }
        while (numero != 0);
        std::cout<<"la cantidad de n°(+) fue: "<<contPos;
        std::cout<<"\n";
        std::cout<<"la cantidad de n°(-) fue: "<<contNeg<<"\n";
         std::cout<<"la cantidad de n° fue: "<<cont<<"\n";      
   
  
 system ("pause") ;
 return 0;
    
}