/*Realiza una funión que tome como Parámetro un vector de enteros 
y su tamaño e imprima un vector con los elementos impares
del vector recibido*/

#include <iostream>
#include <conio.h>

using namespace std;

void tomarVector ();
void impares (int vec[], int);

int tam, vec[100];

int main (){
    tomarVector ();
    impares (vec,tam);


    getch ();
    return 0;
}

void tomarVector (){
    cout<<"Digite el tamaño del vector: ";
    cin>>tam;

    for (int i = 0; i < tam; i++){
        cout<<"el numero "<<i+1<<": ";
        cin>>vec[i];
    }
}

void impares (int vec[], int tam){
    int vecImpares[100];
    int j=0;
    for (int i=0; i<tam;i++){
        if (vec[i]%2 != 0){
            vecImpares[j] = vec [i];
            j++;
        }
    }
    cout<<"\nimprimiendo los elementos impares del vector: "<<"\n";
        for (int i = 0; i < j; i++){
            cout<<vecImpares[i]<<" ";
        }
}