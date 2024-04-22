#include <iostream>
#include "vector.hpp"
using namespace std;
int main(){
    Vector a(5);
    Vector b=a;
    a.getVariables();
    b.getVariables();
    b.setSize(50);
    b.getVariables();
    a.getVariables();
  return 0;
}
/* output:
size of  0x53ab7ffb80 is:5
vec of  0x53ab7ffb80 is:0x25294ce62c0
size of  0x53ab7ffb70 is:5
vec of  0x53ab7ffb70 is:0x25294ce62c0
size of  0x53ab7ffb70 is:50
vec of  0x53ab7ffb70 is:0x25294ce6320
size of  0x53ab7ffb80 is:5
vec of  0x53ab7ffb80 is:0x25294ce62c0
*/