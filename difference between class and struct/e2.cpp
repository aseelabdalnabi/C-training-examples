// Program 2
// C++ Program to demonstrate that
// members of a structure are public
// by default.
#include <iostream>

struct Test {
	// x is public
	int x;
};

int main()
{
	Test t;
	t.x = 20;

	// works fine because x is public
	std::cout << t.x;
}
