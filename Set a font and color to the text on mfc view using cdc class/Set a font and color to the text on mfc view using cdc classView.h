
// Set a font and color to the text on mfc view using cdc classView.h : interface of the CSetafontandcolortothetextonmfcviewusingcdcclassView class
//

#pragma once


class CSetafontandcolortothetextonmfcviewusingcdcclassView : public CView
{
protected: // create from serialization only
	CSetafontandcolortothetextonmfcviewusingcdcclassView() noexcept;
	DECLARE_DYNCREATE(CSetafontandcolortothetextonmfcviewusingcdcclassView)

// Attributes
public:
	CSetafontandcolortothetextonmfcviewusingcdcclassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CSetafontandcolortothetextonmfcviewusingcdcclassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Set a font and color to the text on mfc view using cdc classView.cpp
inline CSetafontandcolortothetextonmfcviewusingcdcclassDoc* CSetafontandcolortothetextonmfcviewusingcdcclassView::GetDocument() const
   { return reinterpret_cast<CSetafontandcolortothetextonmfcviewusingcdcclassDoc*>(m_pDocument); }
#endif

