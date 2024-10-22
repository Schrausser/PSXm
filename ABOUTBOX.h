// aboutbox.h : header file
//




/////////////////////////////////////////////////////////////////////////////
// CBigIcon window

class CBigIcon : public CButton
{
// Attributes
public:

// Operations
public:
	void SizeToContent();

// Implementation
protected:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);

	//{{AFX_MSG(CBigIcon)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
// CAboutBox dialog

class CAboutBox : public CDialog
{
// Construction
public:
	CAboutBox(CWnd* pParent = NULL);    // standard constructor

// Dialog Data
	//{{AFX_DATA(CAboutBox)
	enum { IDD = IDD_ABOUTBOX };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	CBigIcon m_icon; // self-draw button

	// Generated message map functions
	//{{AFX_MSG(CAboutBox)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
// CSplashWnd dialog

class CSplashWnd : public CDialog
{
// Construction
public:
	BOOL Create(CWnd* pParent);

// Dialog Data
	//{{AFX_DATA(CSplashWnd)
	enum { IDD = IDD_SPLASH };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	CBigIcon m_icon; // self-draw button
	CFont m_font;   // light version of dialog font

	// Generated message map functions
	//{{AFX_MSG(CSplashWnd)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
// Useful helpers

void PASCAL CenterWindow(CWnd* pWnd);   // center window relative to parent

///////////////////////////////////////////////////////////////////////////// 
