// vfcdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CVfcDlg dialog

class CVfcDlg : public CDialog
{
// Construction
public:
	CVfcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CVfcDlg)
	enum { IDD = IDD_VFCHI };
	CString	m_vfchia;
	CString	m_vfchib;
	CString	m_vfchic;
	CString	m_vfchid;
	CString	m_ergtx1;
	CString	m_ergtx2;
	CString	m_ergtx3;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(CVfcDlg)
	afx_msg void OnClickedBerech();
	afx_msg void OnClickedNeu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
