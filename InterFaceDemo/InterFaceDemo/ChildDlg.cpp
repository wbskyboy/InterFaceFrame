// ChildDlg.cpp : implementation file
//

#include "stdafx.h"
#include "InterFaceDemo.h"
#include "ChildDlg.h"
#include "afxdialogex.h"


// CChildDlg dialog

IMPLEMENT_DYNAMIC(CChildDlg, CDialog)

CChildDlg::CChildDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CChildDlg::IDD, pParent)
{
	if (!m_sheet)
		m_sheet = new CMySheet(_T("Test"));
	if (!m_pageone)
		m_pageone = new CPageOne;
	if (!m_pagetwo)
		m_pagetwo = new CPageTwo;
}

CChildDlg::~CChildDlg()
{
}

void CChildDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CChildDlg, CDialog)
//	ON_WM_NCHITTEST()
//	ON_WM_NCHITTEST()
END_MESSAGE_MAP()


// CChildDlg message handlers


BOOL CChildDlg::Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
{
	return CDialog::Create(lpszTemplateName, pParentWnd);
}


BOOL CChildDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	m_sheet->AddPage(m_pageone);
	m_sheet->AddPage(m_pagetwo);
	m_sheet->Create(this, WS_CHILD | WS_VISIBLE |WS_BORDER);
	CRect rct;
	GetDlgItem(IDC_STATIC1)->GetWindowRect(&rct);
	ScreenToClient(&rct);
	m_sheet->MoveWindow(&rct);
	m_sheet->ShowWindow(SW_SHOW);
	return TRUE;  // return TRUE unless you set the focus to a control
}


void CChildDlg::OnCancel()
{
	// TODO: Add your specialized code here and/or call the base class

	/*CDialog::OnCancel();*/
}
