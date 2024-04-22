#include <iostream>
using namespace std;

int main() {
  string str = "Programming";

  // declaring a reverse iterator
  string::reverse_iterator rit;

  rit = str.rbegin();

  cout << * rit;
  rit++;

  cout << * rit;
  rit++;

  cout << * rit;
  return 0;
}
/*output:
gni
*/