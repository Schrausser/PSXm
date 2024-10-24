// waitcur.h
//


// Defines CWaitCursor, a class which simplifies putting up the wait cursor
// during long operations.
//

struct CWaitCursor
{
// Construction/Destruction
	CWaitCursor()
		{ AfxGetApp()->BeginWaitCursor(); }
	~CWaitCursor()
		{ AfxGetApp()->EndWaitCursor(); }

// Operations
	void Restore()
		{ AfxGetApp()->RestoreWaitCursor(); }
};

/////////////////////////////////////////////////////////////////////////////
