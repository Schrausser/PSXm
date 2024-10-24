// ztabdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CztabDlg dialog

class CztabDlg : public CDialog
{
// Construction
public:
	CztabDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CztabDlg)
	enum { IDD = IDD_ZTAB };
	CString	m_erg;
	CString	m_t;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(CztabDlg)
	afx_msg void OnClickedBerech();
	afx_msg void OnClickedNeu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
