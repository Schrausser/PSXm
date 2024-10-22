void CVfcDlg::OnClickedBerech()
{
	 
    double chivf,phivf,stein;
    char bc[15],ap[15],ui[15];
     int cia;
   int cib;
   int cic;
   int cid;
   
	

	calc cal;

	UpdateData(TRUE);
	
	cia = atoi(m_vfchia);
	cib = atoi(m_vfchib);
	cic = atoi(m_vfchic);
	cid = atoi(m_vfchid);
	
	cal.vfc(cia, cib, cic, cid);
	
	
	chivf=cal.chi;
	phivf=cal.phi;
	stein=cal.zwer;
	
	prot prot;
	prot.vfctx(cia,cib,cic,cid,chivf,phivf);

	
	sprintf(bc,"Chi=  %3.4lf",chivf);
	sprintf(ap,"Phi=  %1.4lf",phivf);  
	sprintf(ui,"p=    %1.4lf",stein);
	
  
		         
    m_ergtx1 = bc;
    m_ergtx2 = ap;
    m_ergtx3 = ui;
	
    UpdateData(FALSE);
		
}

void CVfcDlg::OnClickedNeu()                  
{
	m_vfchia = "";
	m_vfchib = "";
	m_vfchic = "";
	m_vfchid = "";
	
	m_ergtx1 = "";
	m_ergtx2 = "";
	m_ergtx3 = "";
	
	
	UpdateData(FALSE);
	
}

void CVfcDlg::OnClickedProto()
{

}

void CVfcDlg::OnOK()
{
	
    
	
	CDialog::OnOK();
} 
