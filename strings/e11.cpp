#include <iostream>

using namespace std;

int main() {
  string str = "Programming";

  // declaring an iterator
  string::iterator it;

  it = str.end();

  cout << * it; // nothing will print because the iterator points to \0
  it--;

  cout << * it;
  it--;

  cout << * it;

  return 0;
}
// output:gn