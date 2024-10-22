// psx.h : main header file for the PSX application



#include "resource.h"
#include "waitcur.h"
#include "pageset.h"
#include "aboutbox.h"

/////////////////////////////////////////////////////////////////////////////
// CPsxApp

class CPsxApp : public CWinApp
{
public:
	CPsxApp();

private:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	virtual BOOL OnIdle(LONG lCount);
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DWORD m_dwSplashTime;
	CSplashWnd m_splash;

	//{{AFX_MSG(CPsxApp)
	afx_msg void OnAppAbout();
	afx_msg void OnPageSetup();
	afx_msg void OnVfchi();
	afx_msg void OnMnchi();
	afx_msg void OnTabellenT();
	afx_msg void OnTabellenZ();
	afx_msg void OnTtu();
	afx_msg void OnKomvar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

extern CPageSetupDlg dlgPageSetup;

/////////////////////////////////////////////////////////////////////////////
