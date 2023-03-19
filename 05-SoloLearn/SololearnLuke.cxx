/*sorry for to sploiler..
but i can't resolve it whithout the help..
in this code the winers won because the luk is a variable.
*/



#include <iostream>
#include <string>
//#include <conio.h>
using namespace std;

// function prototype

void winners (string clients[],int, int, int);


int main() {
    int lukAcum ;
    string clients [] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the luk number like  enter
    int n;
    cin >> n;
    lukAcum =n;
    //call to the function
    winners (clients, 13, n, lukAcum);
    //getch ();
    return 0;
    
}
//defining the  function
void winners(string clients[],int size,int luk,int lukAcum) 
{
   luk--;
   for (int i = 0;  i < size ; i++)
   {
       if (luk > ( size - 1))
       {
           break;
       }
       cout<<clients[luk]<<endl;
       luk = luk + lukAcum;
   }
}