// ttabdlg.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "ttabdlg.h"
#include "calc.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CttabDlg dialog

CttabDlg::CttabDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CttabDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CttabDlg)
	m_t = "";
	m_n = "";
	m_erg = "";
	//}}AFX_DATA_INIT
}

void CttabDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CttabDlg)
	DDX_Text(pDX, IDC_TTABT, m_t);
	DDX_Text(pDX, IDC_TTABN, m_n);
	DDX_Text(pDX, IDC_TTABERG, m_erg);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CttabDlg, CDialog)
	//{{AFX_MSG_MAP(CttabDlg)
	ON_BN_CLICKED(IDC_BERECH, OnClickedBerech)
	ON_BN_CLICKED(IDC_NEU, OnClickedNeu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CttabDlg message handlers

void CttabDlg::OnClickedBerech()
{
	float yat,ybz;
	double uitz;
	char pzt[20];
	
	calc cal;
	
	UpdateData(TRUE);
	
	yat = atof(m_t);
	ybz = atof(m_n);
	
	cal.tper(yat, ybz);
	
	uitz = cal.prozent;
	
	sprintf(pzt,"%lf",uitz);
	
	m_erg = pzt;
	
	UpdateData(FALSE);
	
	
	
}

void CttabDlg::OnClickedNeu()
{
    m_t = "";
	m_n = "";
	m_erg = "";
    
    UpdateData(FALSE);
	
}

void CttabDlg::OnCancel()
{
	

	CDialog::OnCancel();
}
