// prot.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// prot window

class prot : public CWnd
{
// Construction
public:
	prot();
	void vfctx(long aci,long bci,long cci,long dci,double cc,double pp,double pro);


// Attributes
public:

// Operations
public:

// Implementation
public:
	virtual ~prot();

	// Generated message map functions
protected:
	//{{AFX_MSG(prot)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
