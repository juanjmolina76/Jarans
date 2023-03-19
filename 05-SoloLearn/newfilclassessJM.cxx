
#include <iostream>
#include <cstdlib>
using namespace std;

class operaciones {
public:
int primero;
int segundo;
int resultado;

void sumar(){
    resultado=primero+segundo;
    cout<<"la suma es="<<resultado<<"\n";
}
void restar(){
    resultado=primero-segundo;
    cout<<"la resta es="<<resultado<<"\n";
}
operaciones (int,int);
};

operaciones::operaciones(int dato1,int dato2){
    primero=dato1;
    segundo=dato2;
}

int main(){
    operaciones objeto1(30,10);
    objeto1.sumar();
    
    operaciones objeto2(100,500);
    objeto2.restar();
    
    operaciones objeto5(35,50);
    objeto5.sumar();
    
    operaciones objeto3(80,20);
    objeto3.restar();
    
//    cout<<objeto1.resultado<<"\n";
    //cout<<objeto2.resultado<<"\n";
    
    objeto2.sumar();
    
    system("pause");
    return 0;
}
