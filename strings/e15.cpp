#include <iostream>
using namespace std;  

int main() {
  string str1 = "Using copy function";
  char str2[10];

  // copying 9 chars starting from index 5  
  str1.copy(str2, 9, 5);

  // The last character of a char array should be \0
  str2[9] = '\0';

  cout << "The copied string is:" << str2;

  return 0;
}  
/*output:
The copied string is: copy fun
*/
