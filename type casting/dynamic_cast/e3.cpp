#include<iostream>
using namespace std;
class Base{   
 void print(){cout<<"Base"<<endl; //without virtual keyword
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
Derived1 *dp2= dynamic_cast<Derived1 *>(bp);
if(dp2== nullptr){
   cout<<"NULL"<<endl;
}else{
   cout<<" NOT NULL"<<endl;

}
return 0;
}
//error: cannot 'dynamic_cast' 'bp' (of type 'class Base*') to type 'class Derived1*' (source type is not polymorphic)
