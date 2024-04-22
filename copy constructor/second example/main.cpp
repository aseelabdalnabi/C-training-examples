#include <iostream>
#include "vector.hpp"
using namespace std;
int main(){
    Vector a(5);
    Vector b=a;
    cout<<"a object values:"<<endl;
    a.getVariables();
    cout<<"a object Addresses:"<<endl;
    a.getAddresses();
    cout<<"b object values:"<<endl;
    b.getVariables();
    cout<<"b object Addresses:"<<endl;
    b.getAddresses(); 

    b.setSize(50);
    cout<<"\n  ...After changing the size value of b object... "<<endl;
    
    cout<<"a object values:"<<endl;
    a.getVariables();
    cout<<"a object Addresses:"<<endl;
    a.getAddresses();
    cout<<"b object values:"<<endl;
    b.getVariables();
    cout<<"b object Addresses:"<<endl;
    b.getAddresses();
  return 0;
}