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

Vector(const Vector &other){
    cout<<"copy constructor called "<<endl;
    this->size=other.size;
    this->vec=new int[this->size];
    for(int i=0 ; i<this->size ; ++i){
        this->vec[i]=other.vec[i];
    }
}
void getAddresses(){
     cout<<"the address of size is : "<<&size<<endl;
     cout<<"the address of vec is : "<<vec<<endl;
}

void getVariables(){
    cout<<"size is :"<<size<<endl;
    cout<<"vec is :"<<*vec<<endl;
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