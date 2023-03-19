#include<iostream>
using namespace std;
int producto(int x, int y);
int potencia(int x, int y);
int main(){
    int n,pot;
    cout<<"Digite un nro y su potencia: ";
    cin>>n>>pot;
cout<<potencia(n,pot)<<endl;
return 0;
}
int potencia(int x, int y){
if(y== 0)
{
return 1;
}else{
return producto(x, potencia(x, y-1));
}
}
int producto(int x, int y)
{
int prod = 0;
for(int i = 0; i < y; i++)
{
prod += x;
}
return prod;
}