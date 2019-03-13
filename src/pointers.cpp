#include <iostream>

using namespace std;

void myswap(int ptr1, int ptr2)
{
  auto temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
  cout<<"a = "<<ptr1<<", b = "<<ptr2<<endl;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

//swap(a,b); //why does theirs work????   
 
  myswap(a, b); // but mine doesn't ?!?!?!?!!!???

  //cout<<"a = "<<a<<", b = "<<b<<endl;
  
  //for myswap method since it is using void it cannot return any value.
  
  //solution print values in the void function.


}
