
#include <iostream>
using namespace std;

int fun(int& x) { return x; }

int main()
{ 
	cout << fun(10);
	return 0;
}
/*there is a compilation error-error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    8 |  cout << fun(10);
)*/
