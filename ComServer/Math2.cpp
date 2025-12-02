// Math2.cpp : Implementation of CMath2

#include "pch.h"
#include "Math2.h"


// CMath2


STDMETHODIMP CMath2::Sub(LONG a, LONG b, LONG* res)
{
    // TODO: Add your implementation code here
    *res = a - b;
    return S_OK;
}
