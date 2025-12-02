#include <iostream>

using namespace std;

//	const_cast
//
//	- It is used to remove the const-ness of pointer or a reference.
//  .... when....


void ThirdPartyApi(int* x)
{
	int k = 10;
	cout << k + (*x)<< endl;
}

int main()
{

	//	1) Actual referred object/variable is not const.

	const int a = 10;	//Original variable is 'const'
	const int* b = &a;
	
	int* d = const_cast<int*> (b); // Not recommended to change the const ness of the original source 'a'.
	*d = 15;

	cout << a << endl;
	cout << *b << endl;

	int a1 = 20;		
	const int* b1 = &a1;

	//	Valid use of const_cast where the original source is NOT a const vaiable.
	int* d1 = const_cast<int*> (b1); 
	*d1 = 30;

	cout << a1 << endl;
	cout << *d1 << endl;

	const int x = 30;
	const int* px = &x;

	//	Calling Third party api by passing a const variable in place of a non-const variable.
	ThirdPartyApi(const_cast<int*> (px));

	return 0;

}