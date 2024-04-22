#include<iostream>
using namespace std;
class Base {};
class Derivedl: public Base {};
class Derived2: public Base {};
int main() {
Derivedl d1;
Derived2 d2;
Base* bp1= static_cast<Base*> (&d1) ;
Base* bp2 = static_cast<Base*> (&d2) ;
Derivedl*d1p= static_cast<Derivedl*>  (bp2);
Derived2 *d2p = static_cast<Derived2*> (bp1);
return 0;
}
