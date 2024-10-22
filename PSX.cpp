
#include "stdafx.h"
#include "psx.h"
#include "mainfrm.h"
#include "padview.h"
#include "paddoc.h"
#include "padframe.h"
#include "vfcdlg.h"
#include "mncdlg.h"
#include "ttabdlg.h"
#include "ztabdlg.h"
#include "ttudlg.h"
#include "vardlg.h"
#include "ctl3d.h"

BEGIN_MESSAGE_MAP(CPsxApp, CWinApp)
	//{{AFX_MSG_MAP(CPsxApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
	ON_COMMAND(ID_PAGE_SETUP, OnPageSetup)
	ON_COMMAND(ID_VFCHI, OnVfchi)
	ON_COMMAND(ID_MNCHI, OnMnchi)
	ON_COMMAND(ID_TABELLEN_T, OnTabellenT)
	ON_COMMAND(ID_TABELLEN_Z, OnTabellenZ)
	ON_COMMAND(ID_TTU, OnTtu)
	ON_COMMAND(ID_KOMVAR, OnKomvar)
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
	ON_COMMAND(ID_FILE_PRINT_SETUP, CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()

CPsxApp SuperPadApp;

CPsxApp::CPsxApp()
{
}

BOOL CPsxApp::InitInstance()
{
	Ctl3dRegister(AfxGetInstanceHandle());
	Ctl3dAutoSubclass(AfxGetInstanceHandle());
	
	CPadFrame::Initialize();

	AddDocTemplate(
		new CMultiDocTemplate(IDR_TEXTTYPE,
		RUNTIME_CLASS(CPadDoc),
		RUNTIME_CLASS(CPadFrame),
		RUNTIME_CLASS(CPadView)));

	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame->LoadFrame(IDR_MAINFRAME))
		return FALSE;
	m_pMainWnd = pMainFrame;

	UINT nCmdShow = m_nCmdShow;
	m_nCmdShow = SW_HIDE;

	((CMainFrame*)m_pMainWnd)->InitialShowWindow(nCmdShow);
	m_pMainWnd->UpdateWindow();

	if (!m_pMainWnd->IsIconic() && m_lpCmdLine[0] == 0 &&
		m_splash.Create(m_pMainWnd))
	{
		m_splash.ShowWindow(SW_SHOW);
		m_splash.UpdateWindow();
	}

	m_dwSplashTime = ::GetCurrentTime();

	LoadStdProfileSettings();
	CPadView::Initialize();
	dlgPageSetup.Initialize();

	if (m_lpCmdLine[0] == '\0')
		OnFileNew();
	else
		OpenDocumentFile(m_lpCmdLine);

	m_nCmdShow = nCmdShow;
	m_pMainWnd->UpdateWindow();

	return TRUE;
}

BOOL CPsxApp::OnIdle(LONG lCount)
{
	// call base class idle first
	BOOL bResult = CWinApp::OnIdle(lCount);

	// then do our work
	if (m_splash.m_hWnd != NULL)
	{
		if (::GetCurrentTime() - m_dwSplashTime > 5000)
		{
			// timeout expired, destroy the splash window
			m_splash.DestroyWindow();
			m_pMainWnd->UpdateWindow();

			// NOTE: don't set bResult to FALSE,
			//  CWinApp::OnIdle may have returned TRUE
		}
		else
		{
			// check again later...
			bResult = TRUE;
		}
	}
	return bResult;
}

BOOL CPsxApp::PreTranslateMessage(MSG* pMsg)
{
	BOOL bResult = CWinApp::PreTranslateMessage(pMsg);

	if (m_splash.m_hWnd != NULL &&
		(pMsg->message == WM_KEYDOWN ||
		 pMsg->message == WM_SYSKEYDOWN ||
		 pMsg->message == WM_LBUTTONDOWN ||
		 pMsg->message == WM_RBUTTONDOWN ||
		 pMsg->message == WM_MBUTTONDOWN ||
		 pMsg->message == WM_NCLBUTTONDOWN ||
		 pMsg->message == WM_NCRBUTTONDOWN ||
		 pMsg->message == WM_NCMBUTTONDOWN))
	{
		m_splash.DestroyWindow();
		m_pMainWnd->UpdateWindow();
	}

	return bResult;
}

int CPsxApp::ExitInstance()
{
	dlgPageSetup.Terminate();
	CPadView::Terminate();
	CPadFrame::Terminate();
	Ctl3dUnregister(AfxGetInstanceHandle());

	return CWinApp::ExitInstance();
}

/////////////////////////////////////////////////////////////////////////////
// CPsxApp message handlers

void CPsxApp::OnAppAbout()
{
	CAboutBox about;
	about.DoModal();
}

CPageSetupDlg dlgPageSetup;
void CPsxApp::OnPageSetup()
{
	dlgPageSetup.DoModal();
}

/////////////////////////////////////////////////////////////////////////////

void CPsxApp::OnVfchi()
{
	
	CVfcDlg vfchi;
	vfchi.DoModal();
	
}

void CPsxApp::OnMnchi()
{
	CMncDlg mnc;
	mnc.DoModal();
	
}

void CPsxApp::OnTabellenT()
{
	CttabDlg ttab;
	ttab.DoModal();
	
}

void CPsxApp::OnTabellenZ()
{
	CztabDlg ztab;
	ztab.DoModal();
	
}

void CPsxApp::OnTtu()
{
	CttuDlg tt;
	tt.DoModal();
	
}

void CPsxApp::OnKomvar()
{
	CVarDlg var;
	var.DoModal();
	
}
