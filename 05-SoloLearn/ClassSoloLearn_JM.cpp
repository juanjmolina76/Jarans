/*
The given program defines a Painting class and creates an object using the constructor.
Fix the code so that the constructor takes the name as the argument and outputs it.

Sample Input
Ocean

Sample Output
Ocean
The constructor should take one string as the argument and output it.



*/
#include <iostream>
#include <string>
using namespace std;

class Painting {
    private: 
        string name;
    public:       
        Painting (string nm){
        name = nm;
        cout<<nm;
        }
        string getName (){
            
         
            return name;
        }
};
int main() {
    string temp;
    string name = " ";
   while(cin >>temp){
       name+=temp += " ";
   }

   Painting painting(name);

    return 0;

}