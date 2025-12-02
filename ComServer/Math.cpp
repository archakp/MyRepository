// Math.cpp : Implementation of CMath

#include "pch.h"
#include "Math.h"


// CMath

STDMETHODIMP CMath::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMath
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CMath::Add(LONG a, LONG b, LONG* res)
{
	// TODO: Add your implementation code here
	*res = a + b;
	return S_OK;
}
