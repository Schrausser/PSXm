// vardlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CVarDlg dialog

class CVarDlg : public CDialog
{
// Construction
public:
	CVarDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CVarDlg)
	enum { IDD = IDD_VAR };
	CString	m_k;
	CString	m_n;
	CString	m_erg;
	BOOL	m_wh;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(CVarDlg)
	afx_msg void OnClickedBerech();
	afx_msg void OnClickedNeu();
	afx_msg void OnClickedCheck1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
