#include <iostream>
using namespace std;
class Base{};
class Derived: public Base{};

int main()
{
   Derived d1;
   Base *bp1=(Base*)&d1;
   Base *bp2=static_cast<Base*>(&d1);//allowed
   return 0;
}
