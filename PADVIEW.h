// padview.h : interface of the CPadView class
//



#ifndef __PADVIEW_H__
#define __PADVIEW_H__

#include <afxdlgs.h>
#include <afxext.h>

class CPadView : public CEditView
{
	DECLARE_DYNCREATE(CPadView)

// Construction
	CPadView();
	BOOL PreCreateWindow(CREATESTRUCT& cs);

// Attributes
public:
	// static init/term...
	static void Initialize();
	static void Terminate();

// Operations
public:
	// Word wrap...
	BOOL IsWordWrap() const;
	BOOL SetWordWrap(BOOL bWordWrap);

	// Printing...
	virtual void OnPrint(CDC* pDC, CPrintInfo *pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnScrollTo(CDC* pDC, CPrintInfo* pInfo, POINT point);

// Implementation
public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void PostNcDestroy();

protected:
	BOOL m_bRecreating;         // ==TRUE during recreation of the window

	static LOGFONT m_lfDefFont;
	static LOGFONT m_lfDefFontOld;
	CFont m_font;

	static LOGFONT m_lfDefPrintFont;
	static LOGFONT m_lfDefPrintFontOld;
	CFont m_fontPrint;

	static UINT m_nDefTabStops;
	static UINT m_nDefTabStopsOld;
	static BOOL m_bDefWordWrap;
	static BOOL m_bDefWordWrapOld;

	UINT m_nPreviewPage;
	CTime m_timeHeader;
	CTime m_timeFooter;

	//{{AFX_MSG(CPadView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetTabStops();
	afx_msg void OnChooseFont();
	afx_msg void OnWordWrap();
	afx_msg void OnUpdateWordWrap(CCmdUI* pCmdUI);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnChoosePrintFont();
	afx_msg void OnMirrorDisplayFont();
	afx_msg void OnUpdateMirrorDisplayFont(CCmdUI* pCmdUI);
	afx_msg void OnUpdateChoosePrintFont(CCmdUI* pCmdUI);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

#endif  // __PADVIEW_H__

///////////////////////////////////////////////////////////////////////////// 
