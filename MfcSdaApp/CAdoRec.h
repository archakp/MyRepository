#pragma once
#include <afxdialogex.h>
class CAdoRec : public CDialogEx
{
public:
	CAdoRec() noexcept;

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADODB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

