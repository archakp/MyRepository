// Maths.cpp : Implementation of CMaths

#include "pch.h"
#include "Maths.h"


// CMaths


STDMETHODIMP CMaths::Add2(LONG a, LONG b, LONG* res)
{
	// TODO: Add your implementation code here
	*res = a + b;

	return S_OK;
}
