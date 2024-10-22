// vfcdlg.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "vfcdlg.h"
#include "calc.h"
#include "float.h"
#include "prot.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVfcDlg dialog

CVfcDlg::CVfcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVfcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVfcDlg)
	m_vfchia = "";
	m_vfchib = "";
	m_vfchic = "";
	m_vfchid = "";
	m_ergtx1 = "";
	m_ergtx2 = "";
	m_ergtx3 = "";
	//}}AFX_DATA_INIT
}

void CVfcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVfcDlg)
	DDX_Text(pDX, IDC_A, m_vfchia);
	DDX_Text(pDX, IDC_B, m_vfchib);
	DDX_Text(pDX, IDC_C, m_vfchic);
	DDX_Text(pDX, IDC_D, m_vfchid);
	DDX_Text(pDX, IDC_ERG1_TX, m_ergtx1);
	DDX_Text(pDX, IDC_ERG2_TX, m_ergtx2);
	DDX_Text(pDX, IDC_ERG3_TX, m_ergtx3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVfcDlg, CDialog)
	//{{AFX_MSG_MAP(CVfcDlg)
	ON_BN_CLICKED(IDC_BERECH, OnClickedBerech)
	ON_BN_CLICKED(IDC_NEU, OnClickedNeu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVfcDlg message handlers

void CVfcDlg::OnClickedBerech()
{
   double chivf,phivf,stein;
   char bz[20],ap[20],ui[20];
   long cia;
   long cib;
   long cic;
   long cid;

	calc cal;

	UpdateData(TRUE);
	
	cia = atol(m_vfchia);
	cib = atol(m_vfchib);
	cic = atol(m_vfchic);
	cid = atol(m_vfchid);
	
	cal.vfc(cia, cib, cic, cid);
	
	chivf=cal.chi;
	phivf=cal.phi;
	stein=cal.zwer;
	
	prot prot;
	
	prot.vfctx(cia,cib,cic,cid,chivf,phivf,stein);

	
	sprintf(bz,"   Chi=  %8.4lf",chivf);
	sprintf(ap,"   Phi=  %8.4lf",phivf);  
	sprintf(ui,"     p=  %8.4lf",stein);
	
  
		         
    m_ergtx1 = bz;
    m_ergtx2 = ap;
    m_ergtx3 = ui;
	
    UpdateData(FALSE);
		
	
}

void CVfcDlg::OnClickedNeu()
{
	m_vfchia = "";
	m_vfchib = "";
	m_vfchic = "";
	m_vfchid = "";
	
	m_ergtx1 = "";
	m_ergtx2 = "";
	m_ergtx3 = "";
	
	
	UpdateData(FALSE);
	
} 
