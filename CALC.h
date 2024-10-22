// calc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// calc window

class calc : public CWnd
{
// Construction
public:
	calc();

public:
    void vfc(long chia, long chib, long chic, long chid);
    void mnc(long chib, long chic); 
    
    void per(double zwert);
    void tper(double tx, double n);
    
    void vrt(long en, long ka, int che);
    
    
    double chi;
	double phi;	
	double zwer;
	double prozent;
	double komb;	
// Attributes
public:

// Operations
public:

// Implementation
public:
	virtual ~calc();

	// Generated message map functions
protected:
	//{{AFX_MSG(calc)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

///////////////////////////////////////////////////////////////////////////// 
