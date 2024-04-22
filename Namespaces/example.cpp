#include<iostream> 
using namespace std;

// first name space
namespace firstone {
void fun()
{
    cout << "This is the first NS" << endl;
}
void fun2(){
    cout<<"fun2 in first NS"<<endl;
}
}
// second name space
namespace secondone {
void fun()
{
    cout << "This is the second NS" << endl;
}
void fun2(){
    cout<<"fun2 in second NS"<<endl;
}

}

//using namespace firstone;
using namespace secondone;
int main()
{
    // calls the function from first namespace.
    fun();
    fun2();
    return 0;

}
