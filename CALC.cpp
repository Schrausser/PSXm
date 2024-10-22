// calc.cpp : implementation file
//

#include "stdafx.h"
#include "psx.h"
#include "calc.h"
#include "float.h"
#include "vardlg.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// calc

calc::calc()
{
}

calc::~calc()
{
}


BEGIN_MESSAGE_MAP(calc, CWnd)
	//{{AFX_MSG_MAP(calc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// calc message handlers


void per(double zwert);
void subt(double fx1);
void facu(long fak);
double permut,fx,pi=3.1415926535897932385;


void calc::vfc(long chia, long chib, long chic, long chid)
{
    
    double a,b,c,d,z;
   
	
	a = (chia + chib + chic + chid);
	b = ( pow(((chia * chid) - (chib * chic)),2));
	c = (chia + chib);
    c = c * (chic + chid);
    c = c * (chia + chic);
    c = c * (chib + chid);
    d = a * b;
    chi = d / c;
    phi = sqrt((d/c)/a);
    
    z=sqrt(d/c);
    
    per(z);
    zwer = prozent*2;
    
}

void calc::vrt(long en, long ka, int che)
{ 
  double elemen,klas;
  CVarDlg vr;
   
  if( che == 0)
    { 
     facu(en), elemen = permut;
     ka = en - ka;
     facu(ka), klas = permut;
     
     komb = elemen / klas;
    }
  else
    {
     komb = pow(en,ka);
    }
}

void calc::mnc(long chib, long chic)
{
	double a,b,z;        
   
	a = pow((chib - chic),2);
	b = (chic + chib);
    chi = a / b;
     
    z=sqrt(a/b);
     
    per(z);
    zwer = prozent*2;
}

void calc::per(double zwert)
{
  double qw=fabsl(zwert);

  prozent= qw*(0.0000380036+qw*(0.0000488906+qw*0.000005383));
  prozent=1+qw*(0.049867347+qw*(0.021141006+qw*(0.0032776263+prozent)));
  prozent=0.5*pow(prozent,-16);
  
  if(zwert<0)
   {
    prozent=1-prozent;
   }

}

void calc::tper(double tx, double n)
{
  
 double w1,w2,w3,w4,ww,xx,yy,zz,n1,i,ij,nn1,nn2=1;

 if(n/2 != floor(n/2))
    { 
      n=n+1;
    }
  
  n1 = n, n = 1, w4 = tx, tx =pow(tx,2);
  w1 = n1/(n1+1*tx), w2 = sqrt(1-w1);
  nn1 =2*floor(n1/2)-n1+2;

  prozent = 1-w2, w3 = w1*w2/2;

  for(i = nn1; i < n1; i = i + 2)
      {
        ij = i;

        if(n1 <= i || fabs(2/i*w3)<(0.00001*prozent))
          {
            goto e;
          }

        prozent = prozent-2/i*w3, w3 = w3*w1*(nn2/i+1);
      }

  e:
  prozent = prozent/2, n = n1, tx = w4;

  if(tx < 0)
    {
      prozent = 1-prozent;
    }

  xx = prozent, yy = -5;

  if(xx == 0)
    {
      goto g;
    }

  fx = (fabs(xx)), fx = log10(fx), yy = fx + yy;

  subt(fx);

  zz = fx, fx = yy;

  subt(fx);
  
  yy = zz-fx-1;
  
  if(yy >= 19)
    {
      goto g;
    }

  if(yy < 0)
    { 
      xx = 0;
      goto g;
    }
    
  if(zz >= 90)
    {
      xx = 1e-20,fx = zz, zz = zz-20;
    }
     
   ww = fabs(xx*pow(10,-zz )), ww = floor(ww*pow(10,yy)+0.5);
   ww = ww*(pow(10,zz))*(pow(10,-yy));

  if(fx >= 90)
    {
      ww = 1e20;
    }

  if(xx >= 0)
    { 
      xx = ww;
    }
  else
    {
      xx = ww * -1;
    }

  g:
  prozent = xx;

}

void subt(double fx1)
{
 if(fx1 >= 0)
   {
     fx1 = floor(fx1);
   }
 else
   {
     fx1 = -1*(floor(fabs(fx1)));
   }
   
 fx = fx1;  
}
void facu(long fak)
{
   permut = 1;
  
  do
  {
   permut = permut * fak;
   fak --;
  }
  while(fak != 1); 
}  
