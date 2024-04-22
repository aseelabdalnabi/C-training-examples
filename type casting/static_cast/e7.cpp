#include <iostream>
using namespace std;
class Base{};
class Derived: private Base{};

int main()
{
   Derived d1;
   Base *bp1=(Base*)&d1;
   Base *bp2=static_cast<Base*>(&d1);//conversion to inaccessible base class "Base" is not allowed
   return 0;
}
