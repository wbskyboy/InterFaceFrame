
// InterFaceDemoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "afxdialogex.h"
#include "InterFaceDemo.h"
#include "InterFaceDemoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInterFaceDemoDlg dialog



CInterFaceDemoDlg::CInterFaceDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CInterFaceDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CInterFaceDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CInterFaceDemoDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CInterFaceDemoDlg::OnBnClickedButton1)

	ON_COMMAND(ID_TOOL1, &CInterFaceDemoDlg::OnTool1)
	ON_COMMAND(ID_TOOL2, &CInterFaceDemoDlg::OnTool2)
	ON_COMMAND(ID_TOOL3, &CInterFaceDemoDlg::OnTool3)
	ON_COMMAND(ID_TOOL4, &CInterFaceDemoDlg::OnTool4)
	ON_COMMAND(ID_TOOL5, &CInterFaceDemoDlg::OnTool5)
	ON_COMMAND(ID_TOOL6, &CInterFaceDemoDlg::OnTool6)
	ON_WM_NCHITTEST()
END_MESSAGE_MAP()


// CInterFaceDemoDlg message handlers

BOOL CInterFaceDemoDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	m_dlg.Create((LPCTSTR)IDD_DIALOG1, this);
	CRect rct;
	GetDlgItem(IDC_STATIC)->GetWindowRect(&rct);
	ScreenToClient(&rct);
	m_dlg.MoveWindow(&rct, FALSE);
	m_dlg.ShowWindow(SW_SHOW);

	if (!m_wndToolBar.CreateEx(this) || !m_wndToolBar.LoadToolBar(IDR_TOOLBAR1))
	{
		TRACE0("Failed to Create Dialog Toolbar\n ");
		EndDialog(IDCANCEL);
	}
	m_ImageList.Create(75, 75, ILC_COLOR24 | ILC_MASK, 7, 6);//
	CBitmap bmp;
	for (int i = 0; i < 6; i++)
	{
		bmp.LoadBitmap(IDB_BITMAP1 + i);
		m_ImageList.Add(&bmp, RGB(255, 255, 255));
		bmp.DeleteObject();
	}
	UINT nArray[11];
	for (int i = 0; i < 11; i++)
	{
		nArray[i] = IDB_BITMAP1 + i;
	}
	m_wndToolBar.SetButtons(nArray, 6);
	m_wndToolBar.SetSizes(CSize(82, 82), CSize(75, 75));
	m_wndToolBar.GetToolBarCtrl().SetImageList(&m_ImageList);
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST, AFX_IDW_CONTROLBAR_LAST, 0);
	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CInterFaceDemoDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CRect rct;
	GetClientRect(rct);
	dc.FillSolidRect(rct, RGB(0,0,180));
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CInterFaceDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CInterFaceDemoDlg::OnBnClickedButton1()
{
	CDialog::OnCancel();
}


void CInterFaceDemoDlg::OnTool1()
{
	TRACE(L"OnTool1");
}


void CInterFaceDemoDlg::OnTool2()
{
	TRACE(L"OnTool2");
}


void CInterFaceDemoDlg::OnTool3()
{
	TRACE(L"OnTool3");
}


void CInterFaceDemoDlg::OnTool4()
{
	TRACE(L"OnTool4");
}


void CInterFaceDemoDlg::OnTool5()
{
	TRACE(L"OnTool5");
}

void CInterFaceDemoDlg::OnTool6()
{
	TRACE(L"OnTool6");
}


LRESULT CInterFaceDemoDlg::OnNcHitTest(CPoint point)
{
	LRESULT nHitTest = CDialog::OnNcHitTest(point);
	CRect rct;
	m_wndToolBar.GetWindowRect(&rct);
	ScreenToClient(&rct);
	if (rct.PtInRect(point))
		nHitTest = HTCAPTION;
	return nHitTest;
}
