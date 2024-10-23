// tabstop.h : tab setting dialog

/////////////////////////////////////////////////////////////////////////////
// CSetTabStops dialog

class CSetTabStops : public CDialog
{
	DECLARE_DYNAMIC(CSetTabStops)
// Construction
public:
	CSetTabStops(CWnd* pParent = NULL); // standard constructor

// Dialog Data
	//{{AFX_DATA(CSetTabStops)
	enum { IDD = IDD_SET_TABSTOPS };
	UINT    m_nTabStops;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	//{{AFX_MSG(CSetTabStops)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
