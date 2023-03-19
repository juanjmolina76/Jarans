#include<iostream>
//#include<stdlib >
using namespace std;

void passValue(int x){
    x=99;
    cout<<x<<" ";
}
int main()
{
    int arg= 15;
    passValue(arg);
    cout<<arg<<" ";
    
   //  system("pause");
  // return 0;
}