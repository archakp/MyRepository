#include <iostream>
#include <objbase.h>
#include "D:\Pranesh-Data\Technical\CPP_Concepts\ComServer2\ComServer2_i.c"
#include "D:\Pranesh-Data\Technical\CPP_Concepts\ComServer2\ComServer2_i.h"


using namespace std;

int main()
{
	HRESULT hr = CoInitializeEx(nullptr, ::COINIT::COINIT_APARTMENTTHREADED);

	IMaths* pMath = nullptr;
	hr = CoCreateInstance(CLSID_Maths, nullptr, CLSCTX_INPROC_SERVER, IID_IMaths, (LPVOID*) & pMath);

	LONG res = 0;
	if (SUCCEEDED(hr))
	{
		pMath->AddRef();
		pMath->Add2(5, 6, &res);

		cout << "Result = " << res << endl;
	}

	 int r = getchar();
	pMath->Release();

	CoUninitialize();

	return 0;
}