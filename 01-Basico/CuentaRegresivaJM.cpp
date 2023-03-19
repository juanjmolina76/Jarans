#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
int n;    
int i=1;


cin>>n;

 while  (i<=n)

{
    cout<<n<<"\n";
    if (n%5==0)
    {
        cout<<"Beep"<<"\n";
    }
    
    n=n-1;
}

getch ();
return 0;
}
