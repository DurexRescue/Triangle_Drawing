// TriDoc.cpp : implementation of the CTriDoc class
//

#include "stdafx.h"
#include "Tri.h"

#include "TriDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTriDoc

IMPLEMENT_DYNCREATE(CTriDoc, CDocument)

BEGIN_MESSAGE_MAP(CTriDoc, CDocument)
	//{{AFX_MSG_MAP(CTriDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTriDoc construction/destruction

CTriDoc::CTriDoc()
{
	// TODO: add one-time construction code here

}

CTriDoc::~CTriDoc()
{
}

BOOL CTriDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTriDoc serialization

void CTriDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTriDoc diagnostics

#ifdef _DEBUG
void CTriDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTriDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTriDoc commands
