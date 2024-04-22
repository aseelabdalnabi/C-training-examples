#include <iostream>
using namespace std;

int main()
{  
    int x=10;
	int* ptr = &x;
	int& ref = *ptr;
	cout << ref << '\n';
}
/*
Output:
10
*/