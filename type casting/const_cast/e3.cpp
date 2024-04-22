#include <iostream>
using namespace std;
void thirdparty(int* x){
int k=10;
cout<<k+*(x);
}
int main() {

const int x=20;
const int* px = &x;
thirdparty(const_cast<int *>(px));

  return 0;
}
//output:30