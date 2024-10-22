// vardlg.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "vardlg.h"
#include "calc.h"
#include "prot.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVarDlg dialog

CVarDlg::CVarDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVarDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVarDlg)
	m_k = "";
	m_n = "";
	m_erg = "";
	m_wh = FALSE;
	//}}AFX_DATA_INIT
}

void CVarDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVarDlg)
	DDX_Text(pDX, IDC_K, m_k);
	DDX_Text(pDX, IDC_N, m_n);
	DDX_Text(pDX, IDC_ERG, m_erg);
	DDX_Check(pDX, IDC_CHECK1, m_wh);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVarDlg, CDialog)
	//{{AFX_MSG_MAP(CVarDlg)
	ON_BN_CLICKED(IDC_BERECH, OnClickedBerech)
	ON_BN_CLICKED(IDC_NEU, OnClickedNeu)
	ON_BN_CLICKED(IDC_CHECK1, OnClickedCheck1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVarDlg message handlers
int vwh = 0;

void CVarDlg::OnClickedBerech()
{
  calc cal;
  char ui[20];
  long vn,vk,see;
  double teich;
  
  UpdateData(TRUE);
  
  vn = atol(m_n);
  vk = atol(m_k);
  
  cal.vrt(vn,vk,vwh);
  
   if(cal.komb < 10000000)
  {
   see = cal.komb;
   sprintf(ui,"%ld",see);
  }
  else
  {
   teich = cal.komb;                   
   sprintf(ui,"%ef",teich);
  }
  
  m_erg = ui;
  
  UpdateData(FALSE);

}

void CVarDlg::OnClickedNeu()
{
 m_n = "";
 m_k = "";
 m_erg = ""; 
 
 UpdateData(FALSE);
 
}

void CVarDlg::OnClickedCheck1()
{   

    
	if(vwh == 1)
	 {
	  vwh = 0;
	 }
	else
	 {
	  vwh = 1;
	 }
	
 
}
