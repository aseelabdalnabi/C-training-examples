// C++ program for function overriding

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
	virtual void print ()
	{ cout<< "print base class" <<endl; }

	virtual void show ()
	{ cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
	 void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
	{ cout<< "print derived class" <<endl; }

	void show ()
	{ cout<< "show derived class" <<endl; }
};

int main()
{
	base *bptr;
	derived d;
	bptr = &d;
	

	bptr->print();
	
	
	bptr->show();

	return 0;
}
