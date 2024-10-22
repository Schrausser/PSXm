# Microsoft Visual C++ generated build script - Do not modify

PROJ = PSX
DEBUG = 0
PROGTYPE = 0
CALLER = 
ARGS = 
DLLS = 
D_RCDEFINES = -d_DEBUG
R_RCDEFINES = -dNDEBUG
ORIGIN = MSVC
ORIGIN_VER = 1.00
PROJPATH = D:\_EIGEN~1\2_ARCHIV\2_PROG~1\3_C___~1\PSX\PSX\
USEMFC = 1
CC = cl
CPP = cl
CXX = cl
CCREATEPCHFLAG = 
CPPCREATEPCHFLAG = /YcSTDAFX.H
CUSEPCHFLAG = 
CPPUSEPCHFLAG = /YuSTDAFX.H
FIRSTC =             
FIRSTCPP = STDAFX.CPP  
RC = rc
CFLAGS_D_WEXE = /nologo /W3 /FR /G2 /Zi /D_DEBUG /Od /AM /GA /Fd"PSX.PDB"
CFLAGS_R_WEXE = /nologo /W3 /FR /O1 /DNDEBUG /AM /GA
LFLAGS_D_WEXE = /NOLOGO /ONERROR:NOEXE /NOD /PACKC:61440 /CO /ALIGN:16 /STACK:10240
LFLAGS_R_WEXE = /NOLOGO /ONERROR:NOEXE /NOD /PACKC:61440 /ALIGN:16 /STACK:10240
LIBS_D_WEXE = mafxcwd oldnames libw commdlg shell olecli olesvr mlibcew
LIBS_R_WEXE = mafxcw oldnames libw commdlg shell olecli olesvr mlibcew
RCFLAGS = /nologo
RESFLAGS = /nologo
RUNFLAGS = 
DEFFILE = PSX.DEF
OBJS_EXT = 
LIBS_EXT = ..\CTL3D\OBJ16\V2\CTL3DV2.LIB 
!if "$(DEBUG)" == "1"
CFLAGS = $(CFLAGS_D_WEXE)
LFLAGS = $(LFLAGS_D_WEXE)
LIBS = $(LIBS_D_WEXE)
MAPFILE = nul
RCDEFINES = $(D_RCDEFINES)
!else
CFLAGS = $(CFLAGS_R_WEXE)
LFLAGS = $(LFLAGS_R_WEXE)
LIBS = $(LIBS_R_WEXE)
MAPFILE = nul
RCDEFINES = $(R_RCDEFINES)
!endif
!if [if exist MSVC.BND del MSVC.BND]
!endif
SBRS = STDAFX.SBR \
		MAINFRM.SBR \
		PADDOC.SBR \
		PADFRAME.SBR \
		PADVIEW.SBR \
		PAGESET.SBR \
		ABOUTBOX.SBR \
		TABSTOP.SBR \
		PSX.SBR \
		CALC.SBR \
		PROT.SBR \
		MNCDLG.SBR \
		VFCDLG.SBR \
		TTABDLG.SBR \
		ZTABDLG.SBR \
		TTUDLG.SBR \
		VARDLG.SBR


CTL3DV2_DEP = 

STDAFX_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h


MAINFRM_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\mainfrm.h


PADDOC_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\paddoc.h


PADFRAME_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\padframe.h


PADVIEW_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\padview.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\tabstop.h


PAGESET_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h


ABOUTBOX_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h


TABSTOP_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\tabstop.h


PSX_RCDEP = res\initial.ico \
	res\texttype.ico \
	res\mainfram.ico \
	res\ini.ico \
	res\bitmap1.bmp


PSX_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\mainfrm.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\padview.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\paddoc.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\padframe.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\vfcdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\mncdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ttabdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ztabdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ttudlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\vardlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ctl3d.h


CALC_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\vardlg.h


PROT_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\prot.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\vfcdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h


MNCDLG_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\mncdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\prot.h


VFCDLG_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\vfcdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\prot.h


TTABDLG_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ttabdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h


ZTABDLG_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ztabdlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h


TTUDLG_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\ttudlg.h


VARDLG_DEP = d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\stdafx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\psx.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\waitcur.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\pageset.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\aboutbox.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\vardlg.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\calc.h \
	d:\_eigen~1\2_archiv\2_prog~1\3_c___~1\psx\psx\prot.h


all:	$(PROJ).EXE $(PROJ).BSC

STDAFX.OBJ:	STDAFX.CPP $(STDAFX_DEP)
	$(CPP) $(CFLAGS) $(CPPCREATEPCHFLAG) /c STDAFX.CPP

MAINFRM.OBJ:	MAINFRM.CPP $(MAINFRM_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c MAINFRM.CPP

PADDOC.OBJ:	PADDOC.CPP $(PADDOC_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c PADDOC.CPP

PADFRAME.OBJ:	PADFRAME.CPP $(PADFRAME_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c PADFRAME.CPP

PADVIEW.OBJ:	PADVIEW.CPP $(PADVIEW_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c PADVIEW.CPP

PAGESET.OBJ:	PAGESET.CPP $(PAGESET_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c PAGESET.CPP

ABOUTBOX.OBJ:	ABOUTBOX.CPP $(ABOUTBOX_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c ABOUTBOX.CPP

TABSTOP.OBJ:	TABSTOP.CPP $(TABSTOP_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c TABSTOP.CPP

PSX.RES:	PSX.RC $(PSX_RCDEP)
	$(RC) $(RCFLAGS) $(RCDEFINES) -r PSX.RC

PSX.OBJ:	PSX.CPP $(PSX_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c PSX.CPP

CALC.OBJ:	CALC.CPP $(CALC_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c CALC.CPP

PROT.OBJ:	PROT.CPP $(PROT_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c PROT.CPP

MNCDLG.OBJ:	MNCDLG.CPP $(MNCDLG_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c MNCDLG.CPP

VFCDLG.OBJ:	VFCDLG.CPP $(VFCDLG_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c VFCDLG.CPP

TTABDLG.OBJ:	TTABDLG.CPP $(TTABDLG_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c TTABDLG.CPP

ZTABDLG.OBJ:	ZTABDLG.CPP $(ZTABDLG_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c ZTABDLG.CPP

TTUDLG.OBJ:	TTUDLG.CPP $(TTUDLG_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c TTUDLG.CPP

VARDLG.OBJ:	VARDLG.CPP $(VARDLG_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c VARDLG.CPP


$(PROJ).EXE::	PSX.RES

$(PROJ).EXE::	STDAFX.OBJ MAINFRM.OBJ PADDOC.OBJ PADFRAME.OBJ PADVIEW.OBJ PAGESET.OBJ \
	ABOUTBOX.OBJ TABSTOP.OBJ PSX.OBJ CALC.OBJ PROT.OBJ MNCDLG.OBJ VFCDLG.OBJ TTABDLG.OBJ \
	ZTABDLG.OBJ TTUDLG.OBJ VARDLG.OBJ $(OBJS_EXT) $(DEFFILE)
	echo >NUL @<<$(PROJ).CRF
STDAFX.OBJ +
MAINFRM.OBJ +
PADDOC.OBJ +
PADFRAME.OBJ +
PADVIEW.OBJ +
PAGESET.OBJ +
ABOUTBOX.OBJ +
TABSTOP.OBJ +
PSX.OBJ +
CALC.OBJ +
PROT.OBJ +
MNCDLG.OBJ +
VFCDLG.OBJ +
TTABDLG.OBJ +
ZTABDLG.OBJ +
TTUDLG.OBJ +
VARDLG.OBJ +
$(OBJS_EXT)
$(PROJ).EXE
$(MAPFILE)
c:\msvc\lib\+
c:\msvc\mfc\lib\+
..\CTL3D\OBJ16\V2\CTL3DV2.LIB+
$(LIBS)
$(DEFFILE);
<<
	link $(LFLAGS) @$(PROJ).CRF
	$(RC) $(RESFLAGS) PSX.RES $@
	@copy $(PROJ).CRF MSVC.BND

$(PROJ).EXE::	PSX.RES
	if not exist MSVC.BND 	$(RC) $(RESFLAGS) PSX.RES $@

run: $(PROJ).EXE
	$(PROJ) $(RUNFLAGS)


$(PROJ).BSC: $(SBRS)
	bscmake @<<
/o$@ $(SBRS)
<< 
