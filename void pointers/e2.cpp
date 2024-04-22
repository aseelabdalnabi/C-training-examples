
// C++ Program to demonstrate that a void pointer
// cannot be dereferenced
 
#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    void* ptr = &a;    
    cout <<ptr<<endl; //address of a 0x7ffe4e5181cc
    cout<<&ptr<<endl; //address of b 0x7ffe4e5181d0
    cout <<*ptr<<endl;//error:'void*' is not a pointer-to-object type 
    //void pointer can't be  dereferenced
    return 0;
}