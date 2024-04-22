#include<iostream>
#include<exception>
using namespace std;
class Base{   
 virtual void print(){cout<<"Base"<<endl; 
 }
};
class Derived1:public Base
{void print(){cout<<"Derived1"<<endl;}
 };
 class Derived2:public Base{
void print(){cout<<"Derived2"<<endl;}
 };
int main() {
Derived1 d1;
Base* bp = dynamic_cast<Base*>(&d1);
try{
    Derived1 &r1= dynamic_cast<Derived1 &>(d1);
    cout<<"type casting is correct"<<endl;
}
catch(std::exception &e){
cout<<e.what()<<endl;
cout<<"type casting is NOT correct"<<endl;
}
return 0;
}
/*OUTPUT:
type casting is correct*/
