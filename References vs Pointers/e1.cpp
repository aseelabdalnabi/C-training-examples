#include <iostream>
using namespace std;
 
int main(){
    int i = 10; // simple or ordinary variable.
    int* p = &i; // single pointer
    int** pt = &p; // double pointer
    int*** ptr = &pt; // triple pointer
    // All the above pointers differ in the value they store
    // or point to.
    cout << "i = " << i << "\t"
         << "p = " << p << "\t"
         << "pt = " << pt << "\t"
         << "ptr = " << ptr << '\n';
         cout << "i = " << i << "\t" << "*p = " << *p << "\t" << "**pt = " << **pt << "\t"<<"***ptr = " << ***ptr << '\n';

         }
