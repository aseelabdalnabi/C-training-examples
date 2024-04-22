#include <iostream>
using namespace std;
 main()
{
	char c;
    int* p=(int*)&c;
    *p = 5;
    int* ptr=static_cast<int*>(&c);//invalid type conversion
	return 0;
}
