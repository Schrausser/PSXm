#include "stdafx.h"
#include "psx.h"
#include "padframe.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPadFrame

IMPLEMENT_DYNCREATE(CPadFrame, CMDIChildWnd)

int CPadFrame::m_nDefCmdShow = SW_SHOWMAXIMIZED;
int CPadFrame::m_nDefCmdShowOld = SW_SHOWMAXIMIZED;

static char BASED_CODE szSec[] = "Settings";
static char BASED_CODE szShowCmd[] = "ShowCmd";

void CPadFrame::ActivateFrame(int nCmdShow)
{
	if (nCmdShow == -1)
		nCmdShow = m_nDefCmdShow;   // use our default
	CMDIChildWnd::ActivateFrame(nCmdShow);
}

void CPadFrame::Initialize()
{
	m_nDefCmdShow = AfxGetApp()->GetProfileInt(szSec, szShowCmd, m_nDefCmdShow);
	m_nDefCmdShowOld = m_nDefCmdShow;
}

void CPadFrame::Terminate()
{
	if (m_nDefCmdShow != m_nDefCmdShowOld)
	{
		AfxGetApp()->WriteProfileInt(szSec, szShowCmd, m_nDefCmdShow);
		m_nDefCmdShowOld = m_nDefCmdShow;
	}
}

BEGIN_MESSAGE_MAP(CPadFrame, CMDIChildWnd)
	//{{AFX_MSG_MAP(CPadFrame)
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPadFrame message handlers

void CPadFrame::OnSize(UINT nType, int cx, int cy)
{
	CMDIChildWnd::OnSize(nType, cx, cy);
	if (!IsWindowVisible())
		return;

	switch (nType)
	{
	case SIZE_MAXIMIZED:
		m_nDefCmdShow = SW_SHOWMAXIMIZED;
		break;
	case SIZE_RESTORED:
		m_nDefCmdShow = SW_SHOWNORMAL;
		break;
	}
} 
