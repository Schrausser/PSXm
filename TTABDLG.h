// ttabdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CttabDlg dialog

class CttabDlg : public CDialog
{
// Construction
public:
	CttabDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CttabDlg)
	enum { IDD = IDD_TTAB };
	CString	m_t;
	CString	m_n;
	CString	m_erg;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(CttabDlg)
	afx_msg void OnClickedBerech();
	afx_msg void OnClickedNeu();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
