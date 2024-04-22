#include <iostream>
using namespace std;

int main() {
  string str = "Learning C++";

  // declaring an iterator
  string::iterator it;

  it = str.begin();

  cout << * it << " ";

  it++;

  cout << * it;

  return 0;
}
/*output:
L e
*/