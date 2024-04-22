
using namespace std;
#include <iostream>

int main()
{
	int a[2] = {1, 2};
	void *ptr = &a;
	ptr = ptr + sizeof(int);
	cout<< *(int *)ptr;
	return 0;
}
//output:2