
// Set a font and color to the text on mfc view using cdc classView.cpp : implementation of the CSetafontandcolortothetextonmfcviewusingcdcclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Set a font and color to the text on mfc view using cdc class.h"
#endif

#include "Set a font and color to the text on mfc view using cdc classDoc.h"
#include "Set a font and color to the text on mfc view using cdc classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSetafontandcolortothetextonmfcviewusingcdcclassView

IMPLEMENT_DYNCREATE(CSetafontandcolortothetextonmfcviewusingcdcclassView, CView)

BEGIN_MESSAGE_MAP(CSetafontandcolortothetextonmfcviewusingcdcclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CSetafontandcolortothetextonmfcviewusingcdcclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CSetafontandcolortothetextonmfcviewusingcdcclassView construction/destruction

CSetafontandcolortothetextonmfcviewusingcdcclassView::CSetafontandcolortothetextonmfcviewusingcdcclassView() noexcept
{
	// TODO: add construction code here

}

CSetafontandcolortothetextonmfcviewusingcdcclassView::~CSetafontandcolortothetextonmfcviewusingcdcclassView()
{
}

BOOL CSetafontandcolortothetextonmfcviewusingcdcclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CSetafontandcolortothetextonmfcviewusingcdcclassView drawing

void CSetafontandcolortothetextonmfcviewusingcdcclassView::OnDraw(CDC* pDC)
{
	CFont font;
	font.CreatePointFont(920, L"Garamond");
	pDC->SelectObject(&font);

	COLORREF color = RGB(230,80,143);
	pDC->SelectObject(&color);
	
	pDC->TextOut(300, 300, L"Hello Teja...!");
	pDC->SelectObject(&font);

	CSetafontandcolortothetextonmfcviewusingcdcclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CSetafontandcolortothetextonmfcviewusingcdcclassView printing


void CSetafontandcolortothetextonmfcviewusingcdcclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CSetafontandcolortothetextonmfcviewusingcdcclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSetafontandcolortothetextonmfcviewusingcdcclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSetafontandcolortothetextonmfcviewusingcdcclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CSetafontandcolortothetextonmfcviewusingcdcclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSetafontandcolortothetextonmfcviewusingcdcclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CSetafontandcolortothetextonmfcviewusingcdcclassView diagnostics

#ifdef _DEBUG
void CSetafontandcolortothetextonmfcviewusingcdcclassView::AssertValid() const
{
	CView::AssertValid();
}

void CSetafontandcolortothetextonmfcviewusingcdcclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSetafontandcolortothetextonmfcviewusingcdcclassDoc* CSetafontandcolortothetextonmfcviewusingcdcclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSetafontandcolortothetextonmfcviewusingcdcclassDoc)));
	return (CSetafontandcolortothetextonmfcviewusingcdcclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CSetafontandcolortothetextonmfcviewusingcdcclassView message handlers
