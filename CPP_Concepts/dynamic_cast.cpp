#include <iostream>
using namespace std;

class base
{
	virtual void print()
	{
		cout << "base called" << endl;
	}
};

class derived1 : public base
{
	void print()
	{
		cout << "derived1 called" << endl;
	}
};

class derived2 : public base
{
	void print()
	{
		cout << "derived2 called" << endl;
	}
};
  

int main()
{
	 
	return 0;
}
