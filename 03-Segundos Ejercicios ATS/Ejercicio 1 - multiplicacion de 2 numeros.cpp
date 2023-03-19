/*Ejercicio 1: Escriba una funci�n llamada mult() que acepte dos n�meros en punto 
flotante como par�metros, multiplique estos dos n�meros y despliegue el resultado.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void mult(float x,float y);
void pedirDatos();
//declaro las funciones globales. son void porque son "vacias".,, no "contienen" un valor, solo lo "DESPLIEGAN"
float n1,n2;
// lamo a la funcion principal
int main(){
	//llamo a las funciones en el orden en que se van a ejecutar
	pedirDatos();
	mult(n1,n2);
	
	getch();
	return 0;
}
//definio la funcion pedirDatos
void pedirDatos(){	
	cout<<"Digite 2 numeros: ";
	//no necesito declarar las variables n1 y n2 ya que son globales
	cin>>n1>>n2;
}
//defino la funcion mult
void mult(float x,float y){
	//defino la variable y le asigno un valor
	float multiplicacion = x * y;
//DESPLIEGO el resultado
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
