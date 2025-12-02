//#include <windows.h>
#include <iostream>
#include "atlstr.h"

using namespace std;

//Pass-by-Val & Pass-by-Ref

void work(int &x)
{
	x++;
	cout << x << endl;
}

int main()
{
	CString s = _T("Hello Geeks");
	
	int a = 10;
	cout << a << endl;
	work(a);
	cout << a << endl;

	return 0;
}