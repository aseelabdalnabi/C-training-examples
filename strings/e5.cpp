#include <iostream>
using namespace std;

int main() {
  string name = "Scaler";

  cout << "Name before using pop_back: " << name << endl;

  // using the pop_back() function
  name.pop_back();

  cout << "Name after using pop_back: " << name << endl;
  return 0;
}
/*output:
Name before using pop_back: Scaler
Name after using pop_back: Scale
*/