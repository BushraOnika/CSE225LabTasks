#include <iostream>
#include"complex.h"
//#include<Complex.cpp>

using namespace std;

int main()
{
   Complex c(1,2);
   Complex c1(2,3);
   //cout<<c.
   Complex c3=c*c1;
   c3.Print();
   int a=(c3!=c1);
   cout<<"if c3==c1(then ans will be 0 or answer will be 1)"<<endl<<"so the answer is: "<<a;
   return 0;

}
