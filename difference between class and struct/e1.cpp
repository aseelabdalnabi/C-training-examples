// Program 1
// C++ Program to demonstrate that
// Members of a class are private
// by default
using namespace std;

class Test {
	// x is private
	int x;
};

int main()
{
	Test t;
	t.x = 20; // compiler error because x
			// is private

	return t.x;
}
