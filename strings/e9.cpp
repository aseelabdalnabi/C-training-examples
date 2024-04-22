#include <iostream>
using namespace std;  

int main() {
  string str = "Using shrink to fit function";
  cout<<"str = "<<str<<endl;
  // using resize
  str.resize(17);
  cout<<"str = "<<str<<endl;
  cout << "The capacity of string before using shrink_to_fit is: " <<
    str.capacity() << endl;

  str.shrink_to_fit();
  cout<<"str = "<<str<<endl;
  cout << "The capacity of string after using shrink_to_fit is: " <<
    str.capacity() << endl;

  return 0;
}
/*output:
str = Using shrink to fit function
str = Using shrink to f
The capacity of string before using shrink_to_fit is: 28
str = Using shrink to f
The capacity of string after using shrink_to_fit is: 17
*/
