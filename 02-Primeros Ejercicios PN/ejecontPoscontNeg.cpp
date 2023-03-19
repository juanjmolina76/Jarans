#include <iostream>
using namespace std;

int main()
{
int numero,contPos=0,contNeg=0,contador=0;
    cout<<"Ingresa numeros enteros (+) o (-) hasta ingresar 0 (cero) "<<"\n";
do
{
   cout<<"\nNumero: ";
   cin>>numero;
   if (numero>0) contPos++;
   if (numero<0) contNeg++;
   contador++;
} while (numero !=0);

    cout<<"\nLa cantidad de nros (+) fue: "<<contPos;
    cout<<"\nLa cantidad de nros (-) fue: "<<contNeg;
    cout<<"\nLa cantidad de nros Total fue: "<<contador-1<<"\n";

    system ("pause");
    return 0;
}