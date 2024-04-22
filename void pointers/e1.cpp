#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    char b = 'x';
     
    void* p = &a;  // void pointer holds address of int 'a'
    cout<<p<<endl; //address of a
    p = &b; // void pointer holds address of char 'b'
    cout<<p<<endl;//address of b
}
 

/* output:
0x7fff8ba87b74
0x7fff8ba87b73
*/