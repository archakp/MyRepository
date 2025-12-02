#include <iostream>
#include <string>

using namespace std;

//		C++ casting : static_cast
//		=========================
// 
// 

int main()
{
	//	1)	It performs implicit conversions between compatible types.
	//  =============================================================

	float f = 3.5;
	int a;

	a = f; //	Ok. C-style implicit conversion.

	//	- Easy to search for all implicit conversions in the code.

	a = static_cast<int> (f); // C++ casting performed at compile time. safe.

	//	2)	Use static_cast when conversion of types is provided by either 'conversion operator' or 'conversion constructor'
	//  ===================================================================================================================

	class Int
	{
		int x;
	public:
		Int(int a) : x(a) {}  // Conversion constructor.

		operator string()	  // Conversion operator.
		{
			return to_string(x);
		}
	};

	Int obj(3);
	string str1 = obj;
	obj = 20;

	string str2 = static_cast<string> (obj);
	obj = static_cast<Int> (30);


	//	3)  static_cast is more restrictive than C-style casting.
	//  ========================================================
	//  Ex: char* to int* conversion is allowed in C-style conversion but not with static_cast.

	char c;				// 1 byte.
	int* p = (int*)&c;	// 4 bytes.
	*p = 5;				// PASS at compile time but FAIL at run-time. (dangerous).

	//int* ip = static_cast<int*> (&c);	// FAIL : Compile time error : Invalid type conversion.


	return 0;
}