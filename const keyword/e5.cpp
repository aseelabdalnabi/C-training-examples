
#include <iostream>
using namespace std;

int foo(int* y)
{
	return *y;
}

// Driver code
int main()
{
	int z = 8;
	const int* x = &z;
	cout << foo(x);
	return 0;
}
