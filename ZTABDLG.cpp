// ztabdlg.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "ztabdlg.h"
#include "calc.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CztabDlg dialog

CztabDlg::CztabDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CztabDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CztabDlg)
	m_erg = "";
	m_t = "";
	//}}AFX_DATA_INIT
}

void CztabDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CztabDlg)
	DDX_Text(pDX, IDC_TTABERG, m_erg);
	DDX_Text(pDX, IDC_TTABT, m_t);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CztabDlg, CDialog)
	//{{AFX_MSG_MAP(CztabDlg)
	ON_BN_CLICKED(IDC_BERECH, OnClickedBerech)
	ON_BN_CLICKED(IDC_NEU, OnClickedNeu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CztabDlg message handlers

void CztabDlg::OnClickedBerech()
{
	float yat;
	double uitz;
	char pzt[20];
	
	calc cal;
	
	UpdateData(TRUE);
	
	yat = atof(m_t);
	
	
	cal.per(yat);
	
	uitz = cal.prozent;
	
	sprintf(pzt,"%.13lf",uitz);
	
	m_erg = pzt;
	
	UpdateData(FALSE);

	
}

void CztabDlg::OnClickedNeu()
{
	m_t = "";
	m_erg = "";
	
	UpdateData(FALSE);
	
} 
