#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* ptr = &x;
	int*& ptr1 = ptr;
    cout<<ptr1<<'\n';
    cout<<ptr<<'\n';
    cout<<*ptr<<'\n';
    cout<<*ptr1<<'\n';
    cout<<x<<endl;
}

/*Output:
0x7fffb3402e24
0x7fffb3402e24
10
10
10
*/