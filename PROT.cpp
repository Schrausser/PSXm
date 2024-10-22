// prot.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "prot.h"
#include "vfcdlg.h"
#include  "calc.h"
#include  "float.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// prot

prot::prot()
{
}

prot::~prot()
{
}


BEGIN_MESSAGE_MAP(prot, CWnd)
	//{{AFX_MSG_MAP(prot)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// prot message handlers

char tmpbuf[9],datebuf[9];
char  line[80]="------------------------------------------------------------------------";

void prot::vfctx(long aci,long bci,long cci,long dci,double cc,double pp,double pro)
{   

 	FILE *ftable;
    ftable = fopen("c:\\psx\\prot.psm","a");
    
    
    char  lon[30]="---------+--------+-------";
    char hypo[40];                                                  
    char  vftxt[1000];
    
    long exx,fzz,gwq,hfr,xyz;
    
   
     if (cc > 2.7055)
     {if (cc > 3.8416)
      { if (cc > 6.6564)
       {
        (hypo,"chi > chi(crit) : (s.)s. -> H1.");
        goto vv;
       }
       sprintf(hypo,"chi > chi(crit) : s. -> H1.");
       goto vv;
      } 
    
      sprintf(hypo,"chi < chi(crit) : t. -> Ho.");
     } 
                                                
    else
     {
      sprintf(hypo,"chi < chi(crit) : n.s. -> Ho.");
     } 
    
    vv:
     
     exx = aci+bci,fzz=cci+dci,gwq=aci+cci,hfr=bci+dci;
     xyz =exx+fzz;
     
    _strtime( tmpbuf );
    _strdate( datebuf);

    sprintf(vftxt,"\n\n\n   PSXm:%s\t   4-Felder CHI-Quadrat\t\t\t%s\n  %s\n\n\n\
                         |        |\n\
                   %5ld |  %5ld |  %5ld\n\t\t%s\t\t df =   1\n\
                         |        |\n\
                   %5ld |  %5ld |  %5ld\t\tchi = %8.4lf\n\t\t%s\t\tphi = %8.4lf\n\
                         |        |\n\
                   %5ld |  %5ld |  %5ld\t\t  p = %8.4lf\n\n\n\n\n\n\
                   %s\n\n\
                   \n\n  %s\n\n",
                   datebuf,tmpbuf,line,aci,bci,exx,lon,cci,dci,fzz,cc,lon,pp,gwq,hfr,xyz,pro,hypo,line);

   
	fprintf(ftable,vftxt);
	fclose(ftable); 
} 
