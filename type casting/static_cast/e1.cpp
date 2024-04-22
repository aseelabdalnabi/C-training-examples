

typedef unsigned char BYTE;
#include<iostream>
using namespace std;
void f() {
   char ch;
   int i = 65;
   float f = 2.5;
   double dbl;

   ch = static_cast<char>(i);   // int to char
   cout<<ch <<endl;
   dbl = static_cast<double>(f);   // float to double
   cout<<dbl<<endl;
   i = static_cast<BYTE>(ch);
   cout<< i <<endl;
}
int main(){
    f();
    return 0;
}