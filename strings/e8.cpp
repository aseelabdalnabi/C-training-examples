#include <iostream>
using namespace std;  

int main() {
  string str = "C++ Programming";

  cout << "The original string is: " << str << endl;

  // We will keep only the first 10 characters of the string
  str.resize(10);

  cout << "The string after using resize is: " << str << endl;

  return 0;
}
/*output:
The original string is: C++ Programming
The string after using resize is: C++ Progra
*/