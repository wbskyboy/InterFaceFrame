// MySheet.cpp : implementation file
//

#include "stdafx.h"
#include "InterFaceDemo.h"
#include "MySheet.h"


// CMySheet

IMPLEMENT_DYNAMIC(CMySheet, CPropertySheet)

CMySheet::CMySheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{

}

CMySheet::CMySheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{

}

CMySheet::~CMySheet()
{
}


BEGIN_MESSAGE_MAP(CMySheet, CPropertySheet)
END_MESSAGE_MAP()


// CMySheet message handlers


BOOL CMySheet::OnInitDialog()
{
	BOOL bResult = CPropertySheet::OnInitDialog();

	GetDlgItem(IDOK)->ShowWindow(SW_HIDE);

	GetDlgItem(IDHELP)->ShowWindow(SW_HIDE);

	GetDlgItem(IDCANCEL)->ShowWindow(SW_HIDE);

	GetDlgItem(ID_APPLY_NOW)->ShowWindow(SW_HIDE);

	CRect btnRect;
	GetDlgItem(IDCANCEL)->GetWindowRect(&btnRect);
	CRect wdnRect;
	GetWindowRect(&wdnRect);  
	::SetWindowPos(this->GetSafeHwnd(), HWND_BOTTOM, 0, 0, wdnRect.Width(), wdnRect.Height() - btnRect.Height() - 10, SWP_NOMOVE | SWP_NOSIZE );

	return bResult;
}
