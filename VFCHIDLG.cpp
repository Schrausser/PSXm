// vfchidlg.cpp : implementation file
//

#include "float.h"
#include "stdafx.h"
#include "psx.h"
#include "vfchidlg.h"
#include "ergdlg.h"
#include "calc.h"



#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif 



/////////////////////////////////////////////////////////////////////////////
// CvfchiDlg dialog

CvfchiDlg::CvfchiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CvfchiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CvfchiDlg)
	m_vfchid = "";
	m_vfchia = "";
	m_vfchib = "";  
	m_vfchib = "";
	//}}AFX_DATA_INIT
}

void CvfchiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CvfchiDlg)
	DDX_Text(pDX, IDC_D, m_vfchid);
	DDX_Text(pDX, IDC_A, m_vfchia);
	DDX_Text(pDX, IDC_B, m_vfchib);
	DDX_Text(pDX, IDC_C, m_vfchic);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CvfchiDlg, CDialog)
	//{{AFX_MSG_MAP(CvfchiDlg)
	ON_BN_CLICKED(IDC_BERECH, OnClickedBerech)
	ON_BN_CLICKED(IDC_NEU, OnClickedNeu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CvfchiDlg message handlers


void CvfchiDlg::OnClickedBerech()
{   
   
    
    
    char ac[10],ap[10];
    double chivf,phivf;
    int cia, cib, cic, cid;
   
    
    
	CvfchiDlg vfchi;
	calc cal;
	//CPsmDoc doc;              
	
	UpdateData(TRUE);
	
	cia = atoi(m_vfchia);
	cib = atoi(m_vfchib);
	cic = atoi(m_vfchic);
	cid = atoi(m_vfchid);
	
	cal.vfc(cia, cib, cic, cid);
	
	chivf=cal.chi;
	phivf=cal.phi;
	sprintf(ac,"\tChi=  %3.4lf",chivf);
	sprintf(ap,"\tPhi=  %2.4lf",phivf);
	

		
    m_ergtx1 = ac;
    m_ergtx2 = ap;
	//erg.m_erg1 = cal.chi;
	//erg.m_erg2 = cal.phi;
    
	
	
	

}

void CvfchiDlg::OnClickedNeu()
{
    m_vfchia = "";
	m_vfchib = "";
	m_vfchic = "";
	m_vfchid = "";
	
	UpdateData(FALSE);
}

    
	
  
void CvfchiDlg::OnOK()
{
	FILE *ftable;
    ftable = fopen("c:\\psm\\prot1.psm","a");
	fprintf(ftable,"Vier-Felder Chi-quadrat\n----------------");
	fclose(ftable);    
	
	
	CDialog::OnOK();
} 
