#include "stdafx.h"
#include "psx.h"
#include "mainfrm.h"


IMPLEMENT_DYNCREATE(CMainFrame, CMDIFrameWnd)
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT BASED_CODE buttons[] =
{
	// same order as in the bitmap 'toolbar.bmp'
    	ID_FILE_NEW,
	ID_FILE_OPEN,
		ID_SEPARATOR,
	ID_FILE_SAVE,
	ID_FILE_NEW,
	ID_FILE_NEW,
		ID_SEPARATOR,
	ID_FILE_PRINT,
	ID_APP_ABOUT, 
	ID_APP_ABOUT,
	    ID_SEPARATOR,
	    ID_SEPARATOR,
	    ID_SEPARATOR,
	ID_VFCHI,
	ID_MNCHI,
	ID_APP_ABOUT,
	ID_TTU,
	ID_KOMVAR,
	ID_SEPARATOR,
	ID_TABELLEN_Z,
	ID_TABELLEN_T,
	
};

static UINT BASED_CODE indicators[] =
{
	0, ID_INDICATOR_CAPS, ID_INDICATOR_NUM, ID_INDICATOR_SCRL,
};

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	if (!m_wndToolBar.Create(this) ||
		!m_wndToolBar.LoadBitmap(IDR_MAINFRAME) ||
		!m_wndToolBar.SetButtons(buttons, sizeof(buttons)/sizeof(UINT)))
	{
		return -1;      // fail to create
	}
	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		sizeof(indicators)/sizeof(UINT)))
	{
		return -1;      // fail to create
	}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////
// Helpers for saving/restoring window state

static char BASED_CODE szSection[] = "Settings";
static char BASED_CODE szWindowPos[] = "WindowPos";
static char szFormat[] = "%u,%u,%d,%d,%d,%d,%d,%d,%d,%d";

static BOOL PASCAL NEAR ReadWindowPlacement(LPWINDOWPLACEMENT pwp)
{
	CString strBuffer = AfxGetApp()->GetProfileString(szSection, szWindowPos);
	if (strBuffer.IsEmpty())
		return FALSE;

	WINDOWPLACEMENT wp;
	int nRead = sscanf(strBuffer, szFormat,
		&wp.flags, &wp.showCmd,
		&wp.ptMinPosition.x, &wp.ptMinPosition.y,
		&wp.ptMaxPosition.x, &wp.ptMaxPosition.y,
		&wp.rcNormalPosition.left, &wp.rcNormalPosition.top,
		&wp.rcNormalPosition.right, &wp.rcNormalPosition.bottom);

	if (nRead != 10)
		return FALSE;

	wp.length = sizeof wp;
	*pwp = wp;
	return TRUE;
}

static void PASCAL NEAR WriteWindowPlacement(LPWINDOWPLACEMENT pwp)
	// write a window placement to settings section of app's ini file
{
	char szBuffer[sizeof("-32767")*8 + sizeof("65535")*2];

	sprintf(szBuffer, szFormat,
		pwp->flags, pwp->showCmd,
		pwp->ptMinPosition.x, pwp->ptMinPosition.y,
		pwp->ptMaxPosition.x, pwp->ptMaxPosition.y,
		pwp->rcNormalPosition.left, pwp->rcNormalPosition.top,
		pwp->rcNormalPosition.right, pwp->rcNormalPosition.bottom);

	AfxGetApp()->WriteProfileString(szSection, szWindowPos, szBuffer);
}

/////////////////////////////////////////////////////////////////////////////

void CMainFrame::InitialShowWindow(UINT nCmdShow)
{
	WINDOWPLACEMENT wp;
	if (!ReadWindowPlacement(&wp))
	{
		ShowWindow(nCmdShow);
		return;
	}
	if (nCmdShow != SW_SHOWNORMAL)
		wp.showCmd = nCmdShow;
	SetWindowPlacement(&wp);
	ShowWindow(wp.showCmd);
}

void CMainFrame::OnClose()
{
	// before it is destroyed, save the position of the window
	WINDOWPLACEMENT wp;
	wp.length = sizeof wp;
	if (GetWindowPlacement(&wp))
	{
		wp.flags = 0;
		if (IsZoomed())
			wp.flags |= WPF_RESTORETOMAXIMIZED;
		// and write it to the .INI file
		WriteWindowPlacement(&wp);
	}

	CMDIFrameWnd::OnClose();
}
