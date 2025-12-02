#include "pch.h"
#include "CAdoRec.h"
#include "resource.h"       // main symbols

CAdoRec::CAdoRec() noexcept : CDialogEx (IDD_ADODB)
{
}

void CAdoRec::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAdoRec, CDialogEx)
END_MESSAGE_MAP()