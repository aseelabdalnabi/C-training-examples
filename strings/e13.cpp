#include <iostream>
using namespace std;

int main() {
  string str = "Learning C++";

  // declaring a reverse iterator
  string::reverse_iterator rit;

  rit = str.rend();
  cout<<*rit<<endl;
  rit--;

  cout << * rit;
  rit--;

  cout << * rit;
  rit--;

  cout << * rit;

  return 0;
}
/*output:

Lea
*/