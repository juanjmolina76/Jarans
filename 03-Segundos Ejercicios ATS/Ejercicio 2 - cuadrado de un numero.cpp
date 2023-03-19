/*Ejercicio 2: Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del 
valor que se le transmite y despliegue el resultado. La funci�n deber� ser capaz de
elevar al cuadrado n�meros flotantes*/

#include<iostream>
#include<conio.h>
using namespace std;
// prototipos de funcion 
void pedirDatos();
void al_cuadrado(float n);
//declaro variable "global" numero
float numero;
//defino la funcion principal
int main(){
	//llamo a las funciones en el orden en q se van a usar
	pedirDatos();	
	al_cuadrado(numero);
	
	getch();
	return 0;
}
//defino funcion toma de datos
void pedirDatos(){
	cout<<"Digite un numero: ";
	//como numero es una variable global no la declaro dentro de la funcion pedirDatos
	cin>>numero;
	
}
//defino la funcion para hallar el cuadrado
void al_cuadrado(float n){
	//declaro la funcion y la incicializo en 0
	float cuadrado=0;

	cuadrado = numero*numero;
	
	cout<<"El cuadrado del numero es: "<<cuadrado<<endl;
}
