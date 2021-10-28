// TriView.h : interface of the CTriView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TRIVIEW_H__50E6007E_9E1F_4397_93F0_DEC15209C619__INCLUDED_)
#define AFX_TRIVIEW_H__50E6007E_9E1F_4397_93F0_DEC15209C619__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTriView : public CView
{
protected: // create from serialization only
	CTriView();
	DECLARE_DYNCREATE(CTriView)

// Attributes
public:
	CTriDoc* GetDocument();
	CPoint m_Start;
	CPoint m_Stop;
	CPoint m_Stop1;
	BOOL m_LbuttonFlag;
	int count;
	BOOL KG1;
	BOOL KG2;
	BOOL RDOWN;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTriView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTriView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTriView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TriView.cpp
inline CTriDoc* CTriView::GetDocument()
   { return (CTriDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRIVIEW_H__50E6007E_9E1F_4397_93F0_DEC15209C619__INCLUDED_)
