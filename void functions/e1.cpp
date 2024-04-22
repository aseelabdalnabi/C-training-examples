// CPP Program to demonstrate void functions
#include <iostream>
using namespace std;

void fun()
{
	cout << "Hello";

	// We can write return in void
	return;
}

// Driver Code
int main()
{
	fun();
	return 0;
}
/*output:
Hello*/