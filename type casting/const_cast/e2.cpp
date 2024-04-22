#include <iostream>
using namespace std;

int main() {
int a1=10;
const int *b1=&a1;
int* d1 = const_cast<int *>(b1);
*d1=15;//valid code
cout<<a1<<endl;
cout<<*d1<<endl;
  return 0;
}
/*output:
15
15
*/
