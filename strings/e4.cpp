#include <iostream>
using namespace std;

int main() {
  string name = "Scaler";

  cout << "Name before using push_back: " << name << endl;

  // Let's add the word "Topics" at the end of the above string
  name.push_back(' ');
  name.push_back('T');
  name.push_back('o');
  name.push_back('p');
  name.push_back('i');
  name.push_back('c');
  name.push_back('s');

  cout << "Name after using push_back: " << name << endl;
  return 0;
}
/*output:
Name before using push_back: Scaler
Name after using push_back: Scaler Topics
*/