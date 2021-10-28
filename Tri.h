// Tri.h : main header file for the TRI application
//

#if !defined(AFX_TRI_H__98812425_F572_4EA2_AE67_23F0959ACAC9__INCLUDED_)
#define AFX_TRI_H__98812425_F572_4EA2_AE67_23F0959ACAC9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTriApp:
// See Tri.cpp for the implementation of this class
//

class CTriApp : public CWinApp
{
public:
	CTriApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTriApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTriApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRI_H__98812425_F572_4EA2_AE67_23F0959ACAC9__INCLUDED_)
