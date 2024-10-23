// paddoc.h : interface of the CPadDoc class
//


#ifndef __PADDOC_H__
#define __PADDOC_H__

class CPadDoc : public CDocument
{
protected:
	DECLARE_DYNCREATE(CPadDoc)
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	virtual void DeleteContents();
	//{{AFX_MSG(CPadDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#endif  // __PADDOC_H__

///////////////////////////////////////////////////////////////////////////// 
