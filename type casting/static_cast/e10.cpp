#include<iostream>
using namespace std;
int main() {
int i = 10;
void *v =  static_cast<void*> (&i);
int *ip = static_cast<int*> (v);
return 0;
}
