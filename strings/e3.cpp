#include <iostream>
using namespace std;

int main() {
  char profession[12];
  
  cout << "Enter your profession: ";
  // We will take maximum 12 characters as input
  cin.getline(profession, 12);
  
  cout << "Your profession is: " << profession;
  
  return 0;
}
/*output:
Enter your profession: Software Engineer
Your profession is: Software En
*/