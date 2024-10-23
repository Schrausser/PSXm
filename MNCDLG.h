// mncdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMncDlg dialog

class CMncDlg : public CDialog
{
// Construction
public:
	CMncDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMncDlg)
	enum { IDD = IDD_MNCHI };
	CString	m_mnchia;
	CString	m_mnchib;
	CString	m_ergtx1;
	CString	m_ergtx2;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(CMncDlg)
	afx_msg void OnClickedBerech();
	afx_msg void OnClickedNeu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
}; 
