// mncdlg.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "mncdlg.h"
#include "float.h"
#include "calc.h"
#include "prot.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMncDlg dialog

CMncDlg::CMncDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMncDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMncDlg)
	m_mnchia = "";
	m_mnchib = "";
	m_ergtx1 = "";
	m_ergtx2 = "";
	//}}AFX_DATA_INIT
}

void CMncDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMncDlg)
	DDX_Text(pDX, IDC_B, m_mnchia);
	DDX_Text(pDX, IDC_C, m_mnchib);
	DDX_Text(pDX, IDC_ERG1_TX, m_ergtx1);
	DDX_Text(pDX, IDC_ERG2_TX, m_ergtx2);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMncDlg, CDialog)
	//{{AFX_MSG_MAP(CMncDlg)
	ON_BN_CLICKED(IDC_BERECH, OnClickedBerech)
	ON_BN_CLICKED(IDC_NEU, OnClickedNeu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMncDlg message handlers

void CMncDlg::OnClickedBerech()
{
	long  cxc,cyb;
    double cmhin,rose;
    char as1[20]="                 ";
    char as2[20]="                 ";
 
	calc cal;
	
	UpdateData(TRUE);
	
	cxc = atol(m_mnchib);
	cyb = atol(m_mnchia);
	
	cal.mnc(cyb,cxc);
	
	cmhin = cal.chi;
	rose = cal.zwer;
	
	sprintf(as2,"     p =  %8.4lf",rose);
	sprintf(as1,"   Chi =  %8.4lf",cmhin);
    
    m_ergtx1 = as1;
    m_ergtx2 = as2;
    
    UpdateData(FALSE); 

	
}

void CMncDlg::OnClickedNeu()
{

	m_mnchia = "";
	m_mnchib = "";
	m_ergtx1="";
	m_ergtx2="",
	
	UpdateData(FALSE);	
}
