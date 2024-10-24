// ttudlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CttuDlg dialog

class CttuDlg : public CDialog
{
// Construction
public:
	CttuDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CttuDlg)
	enum { IDD = IDD_TTU };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(CttuDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
}; 
