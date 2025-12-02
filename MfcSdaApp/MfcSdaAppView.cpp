
// MfcSdaAppView.cpp : implementation of the CMfcSdaAppView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MfcSdaApp.h"
#endif

#include "MfcSdaAppDoc.h"
#include "MfcSdaAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMfcSdaAppView

IMPLEMENT_DYNCREATE(CMfcSdaAppView, CView)

BEGIN_MESSAGE_MAP(CMfcSdaAppView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMfcSdaAppView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMfcSdaAppView construction/destruction

CMfcSdaAppView::CMfcSdaAppView() noexcept
{
	// TODO: add construction code here

}

CMfcSdaAppView::~CMfcSdaAppView()
{
}

BOOL CMfcSdaAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMfcSdaAppView drawing

void CMfcSdaAppView::OnDraw(CDC* /*pDC*/)
{
	CMfcSdaAppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMfcSdaAppView printing


void CMfcSdaAppView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMfcSdaAppView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMfcSdaAppView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMfcSdaAppView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CMfcSdaAppView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMfcSdaAppView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMfcSdaAppView diagnostics

#ifdef _DEBUG
void CMfcSdaAppView::AssertValid() const
{
	CView::AssertValid();
}

void CMfcSdaAppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMfcSdaAppDoc* CMfcSdaAppView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMfcSdaAppDoc)));
	return (CMfcSdaAppDoc*)m_pDocument;
}
#endif //_DEBUG


// CMfcSdaAppView message handlers
