#include <iostream>
using namespace std;  

int main() {
  string fruit1 = "Apple";
  string fruit2 = "Orange";

  cout << "Before swap - fruit 1 is: " << fruit1 << endl;
  cout << "Before swap - fruit 2 is: " << fruit2 << endl << endl;

  // swapping
  fruit1.swap(fruit2);

  cout << "After swap - fruit 1 is: " << fruit1 << endl;
  cout << "After swap - fruit 2 is: " << fruit2 << endl;

  return 0;
}
/*output:
Before swap - fruit 1 is: Apple
Before swap - fruit 2 is: Orange

After swap - fruit 1 is: Orange
After swap - fruit 2 is: Apple
*/