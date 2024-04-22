
#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    void* ptr = &a;
   
    cout << *(int *)ptr << endl;
   
    return 0;
}
//output: 10