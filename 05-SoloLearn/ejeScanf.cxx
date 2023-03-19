#include <iostream>
#include <stdio.h>

using namespace std;
int numeros;
char texto [100];

int main ()
{
printf("numero: ");
scanf("%i",numeros);

printf("texto: ");
scanf ("%100s", texto);

printf("%s\n",texto);
printf ("%i\n",numeros);

system ("pause");
return 0;
}

