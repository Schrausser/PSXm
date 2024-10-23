// padframe.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// CPadFrame frame

class CPadFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CPadFrame)
protected:

// Attributes
public:

// Operations
public:
	static void Initialize();
	static void Terminate();

// Implementation
protected:
	void ActivateFrame(int nCmdShow);

	// Generated message map functions
	//{{AFX_MSG(CPadFrame)
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	static int m_nDefCmdShow;
	static int m_nDefCmdShowOld;
};

///////////////////////////////////////////////////////////////////////////// 
