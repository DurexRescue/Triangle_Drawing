// TriDoc.h : interface of the CTriDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TRIDOC_H__A80F04A9_8649_4F79_9349_FB61FCC51A9B__INCLUDED_)
#define AFX_TRIDOC_H__A80F04A9_8649_4F79_9349_FB61FCC51A9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTriDoc : public CDocument
{
protected: // create from serialization only
	CTriDoc();
	DECLARE_DYNCREATE(CTriDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTriDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTriDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTriDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRIDOC_H__A80F04A9_8649_4F79_9349_FB61FCC51A9B__INCLUDED_)
