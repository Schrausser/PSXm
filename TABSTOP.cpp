#include "stdafx.h"
#include "psx.h"
#include "tabstop.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetTabStops dialog

IMPLEMENT_DYNAMIC(CSetTabStops, CDialog)

CSetTabStops::CSetTabStops(CWnd* pParent /* = NULL */)
	: CDialog(CSetTabStops::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSetTabStops)
	//}}AFX_DATA_INIT
}

void CSetTabStops::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetTabStops)
	DDX_Text(pDX, IDC_EDIT_TABS, m_nTabStops);
	DDV_MinMaxUInt(pDX, m_nTabStops, 1, 16);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSetTabStops, CDialog)
	//{{AFX_MSG_MAP(CSetTabStops)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetTabStops message handlers
