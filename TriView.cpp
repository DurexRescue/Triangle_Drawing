// TriView.cpp : implementation of the CTriView class
//

#include "stdafx.h"
#include "Tri.h"

#include "TriDoc.h"
#include "TriView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTriView

IMPLEMENT_DYNCREATE(CTriView, CView)

BEGIN_MESSAGE_MAP(CTriView, CView)
	//{{AFX_MSG_MAP(CTriView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTriView construction/destruction

CTriView::CTriView()
{
	// TODO: add construction code here
    count=0;
	RDOWN=FALSE;
}

CTriView::~CTriView()
{
}

BOOL CTriView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTriView drawing

void CTriView::OnDraw(CDC* pDC)
{
	CTriDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	if(RDOWN){
           pDC->MoveTo(m_Start); 

           pDC->LineTo(m_Stop);

		   pDC->LineTo(m_Stop1);

           pDC->LineTo(m_Start); 
    }
	if(m_LbuttonFlag == 1)
    {

		if(count==0){
           pDC->MoveTo(m_Start); 

           pDC->LineTo(m_Stop);
		}
		if(count==1){
           pDC->MoveTo(m_Start); 

           pDC->LineTo(m_Stop);

		   pDC->LineTo(m_Stop1); 

		}
    }
}

/////////////////////////////////////////////////////////////////////////////
// CTriView printing

BOOL CTriView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTriView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTriView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTriView diagnostics

#ifdef _DEBUG
void CTriView::AssertValid() const
{
	CView::AssertValid();
}

void CTriView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTriDoc* CTriView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTriDoc)));
	return (CTriDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTriView message handlers

void CTriView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	if(count==0){
	m_Start.x = point.x;  //保存鼠标左键按下时坐标，为直线的起点坐标

    m_Start.y = point.y;

    m_LbuttonFlag = 1;  //设置鼠标左键按下标志，为1表示鼠标左键按下
	}
	if(count==1) m_LbuttonFlag = 1;
	

	//CView::OnLButtonDown(nFlags, point);
}

void CTriView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_LbuttonFlag=0;
	count++;
	//CView::OnLButtonUp(nFlags, point);
}

void CTriView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(count==0){
	     m_Stop.x = point.x;  //每次鼠标移动，会导致直线终点坐标改变

         m_Stop.y = point.y;

         if(m_LbuttonFlag==1)  //当鼠标移动时，如果鼠标左键也是按下，则刷新绘制直线

         {

                   Invalidate(TRUE);

         }
	}
	if(count==1){
		m_Stop1.x=point.x;
		m_Stop1.y=point.y;
	
        if(m_LbuttonFlag==1)  //当鼠标移动时，如果鼠标左键也是按下，则刷新绘制直线

         {

                   Invalidate(TRUE);

         }

	}
	//CView::OnMouseMove(nFlags, point);
}

void CTriView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	RDOWN=TRUE;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}


