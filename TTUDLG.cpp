// ttudlg.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "ttudlg.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CttuDlg dialog

CttuDlg::CttuDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CttuDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CttuDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

void CttuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CttuDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CttuDlg, CDialog)
	//{{AFX_MSG_MAP(CttuDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CttuDlg message handlers
