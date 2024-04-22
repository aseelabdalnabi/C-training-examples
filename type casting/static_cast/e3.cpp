#include <iostream>
#include <string>
using namespace std;
class Int {
	int x;

public:
	Int(int x_in = 0): x{ x_in }
	{
		cout << "Conversion Constructor called" << endl;
	}
	operator string()
	{
		cout << "Conversion Operator called" << endl;
		return to_string(x);
	}
};
int main()
{
	Int obj(3);
	string str = obj;
	obj = 20;
	string str2 = static_cast<string>(obj);
	obj = static_cast<Int>(30);
	return 0;
}
/* output:
Conversion Constructor called
Conversion Operator called
Conversion Constructor called
Conversion Operator called
Conversion Constructor called
*/