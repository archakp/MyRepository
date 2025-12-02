#include <iostream>
#include "objbase.h"
#include "atlbase.h"
#import "D:\Pranesh-Data\Technical\CPP_Concepts\ComServer2\x64\Debug\ComServer2.tlb" no_namespace raw_interfaces_only
using namespace std;
//using namespace ComServer;



int main()
{
	HRESULT hr = CoInitialize(NULL);
	//_com_ptr_t<IDispatch> ptr;
	////_COM_SMARTPTR_TYPEDEF(IMath, );
	long res = 0;

	CComQIPtr<IMaths> pMath;
	CComPtr<IDispatch> pDisp; // = nullptr;  
	CLSID clsid;
	hr = ::CLSIDFromProgID(LPOLESTR("ComServerLib2.Math.1"), &clsid);
	hr = pMath.CoCreateInstance(clsid, NULL, CLSCTX_LOCAL_SERVER);
	hr = pDisp.QueryInterface(&pMath);
	pMath->Add2(5, 4, &res);
	cout << "\n Result = " << res << endl;

	
	CoUninitialize();
	

	return 0;
}