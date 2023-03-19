#include <iostream>
#include <string.h>
using namespace std;

class operacion {
    public:
    int primero;
    int segundo;
    int resultado;
    
    void sumar(){
      resultado=primero+segundo;
      }
      void restar() {
          resultado=primero-segundo;
      }
      void mostrar(){
          cout<<resultado;
      }
      operacion (int,int);
};
operacion::operacion(int primero_, int segundo_){
    primero=primero_;
    segundo=segundo_;
}
int main(){
    operacion objeto1 (5,3);
    objeto1.sumar();
    
    operacion objeto2 (8,2);
    operacion objeto3 (10,30);
    
    objeto3.sumar();
    objeto2.restar();
    
system("pause");
return 0;
}


    