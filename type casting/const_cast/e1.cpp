#include <iostream>
using namespace std;

int main() {
const int a1=10;
const int *b1=&a1;
int* d1 = const_cast<int *>(b1);
*d1=15;//invalied and undefined behavior!
cout<<a1<<endl;
cout<<*d1<<endl;
  return 0;
}
/*output:
10
15
//the real value is 10 and it prints 15 due to code optimization done by the //compiler
*/
