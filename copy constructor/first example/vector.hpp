#ifndef VECTOR_HPP
#define VECTOR_HPP
using namespace std;
#include <iostream>
class Vector{
private:
int *vec;
int size;
public:
Vector(int size=10)
{
this->size=size;
this->vec=new int[size];
}
void getVariables(){
    cout<<"size of  "<<this<<" is:"<<size<<endl;
     cout<<"vec of  "<<this<<" is:"<<vec<<endl;
}
void setSize(int x=10){
    size =x;
    vec = new int[x];
}
~Vector(){
    delete [] this->vec;
}
};
#endif