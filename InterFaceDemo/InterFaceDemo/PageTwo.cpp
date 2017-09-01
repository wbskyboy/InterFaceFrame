// PageTwo.cpp : implementation file
//

#include "stdafx.h"
#include "InterFaceDemo.h"
#include "PageTwo.h"
#include "afxdialogex.h"


// CPageTwo dialog

IMPLEMENT_DYNAMIC(CPageTwo, CPropertyPage)

CPageTwo::CPageTwo()
	: CPropertyPage(CPageTwo::IDD)
{

}

CPageTwo::~CPageTwo()
{
}

void CPageTwo::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageTwo, CPropertyPage)
END_MESSAGE_MAP()


// CPageTwo message handlers
