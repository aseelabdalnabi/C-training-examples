#include <iostream>
using namespace std;
void thirdparty(int* x){
int k=10;
cout<<k+*(x);
}
int main() {

const int x=20;
const int* px = &x;
thirdparty((px));//error:invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]

  return 0;
}
