/*David Junior 
I found this on stackoverflow:
"The & means "Don't take the variable, take the place in memory where this variable is stored." It's a little complicated, but it's necessary so that C can change the value of the variable"

So my guess is even though the var 20 is being passed to the function, the & is telling the function to ignore the variable. 

With this modified example: */
#include <iostream>
using namespace std;
void myFunc(int &x) {
    cout << x << " ";
    x = 100;  
}
int main() {
    int var = 20;
    myFunc(var);
    cout << var;
}  
//it will output 20 100.